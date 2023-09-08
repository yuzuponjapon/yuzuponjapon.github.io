#include <stdio.h>
#include <stdbool.h>

#define MEIRO_WIDTH 13
#define MEIRO_HEIGHT 9

#define PATH 0
#define WALL 1
#define GOAL 2
#define PASSED 3

#define MAX_NUM (MEIRO_WIDTH * MEIRO_HEIGHT)
#define STACK_SIZE MAX_NUM

typedef struct POS {
    int i;
    int j;
} POS_T;

typedef struct STACK {
    int tail;
    POS_T data[STACK_SIZE];
} STACK_T;

STACK_T stack;
static int maze[MEIRO_HEIGHT][MEIRO_WIDTH] = 
{
    {1,1,1,1,1,1,1,1,1,1,1,1,1},
    {1,0,0,0,0,0,0,0,0,0,1,1,1},
    {1,0,1,1,1,1,1,1,1,0,1,0,1},
    {1,0,0,0,0,0,0,0,1,0,0,0,1},
    {1,1,1,1,1,1,1,0,1,1,1,0,1},
    {1,0,0,0,0,0,0,0,0,0,1,0,1},
    {1,0,1,0,1,0,1,1,1,0,1,0,1},
    {1,0,0,0,0,0,0,0,1,0,0,0,1},
    {1,1,1,1,1,1,1,1,1,1,1,1,1}
};

void initStack(STACK_T *stack)
{
    stack->tail = -1;
}

void push(STACK_T *stack, POS_T *input)
{
    if(stack->tail >= STACK_SIZE -1) {
        printf("stack full\n");
        return;
    }
    stack->data[stack->tail + 1] = *input;
    stack->tail = stack->tail + 1;
}
 
POS_T *pop(STACK_T *stack)
{
    POS_T *ret;
    if(stack->tail == -1) {
        printf("empty");
        return NULL;
    }    
    ret = &(stack->data[stack->tail]);
    stack->tail = stack->tail - 1;
    return ret;
}
    bool check(int i, int j) {
    bool ret = true;

    if (i < 0 || i >= MEIRO_WIDTH || j < 0 || j >= MEIRO_HEIGHT) {
        /* (i,j) は迷路外なので通過不可 */
        ret = false;
    }

    if (maze[j][i] == WALL) {
        /* (i,j) は壁なので通過不可 */
        ret = false;
    }

    if (maze[j][i] == PASSED) {
        /* (i,j) は通過済みなので通過不可 */
        ret = false;
    }

    return ret;
}

/* スタート(i,j)からゴールを探索する関数*/
bool search(int s_i, int s_j)
{

    POS_T pos;
    bool ret;

    /* 次の探索候補としてスタートのマスの情報をスタックに格納 */
    if (check(s_i, s_j)) {
        pos.i = s_i; /* スタートのi座標*/
        pos.j = s_j; /* スタートのj座標*/

        push(&stack, &pos); /* スタックにマスの情報を格納*/
    }

    while (true) {
        int i, j;

        /* スタックから次の探索候補のマスを取得*/
        POS_T *next = pop(&stack);
        if (next == NULL) {
            /* 次の探索候補がない場合は探索失敗 */
            ret = false;
            break;
        }
        /* 探索するマスの座標を取得 */
        i = next->i;
        j = next->j;

        if (maze[j][i] == GOAL) {
            /* 探索対象が見つかったので探索成功 */
            printf("ゴールに到着\n");
            ret = true;
            break;
        }

        /* 探索済みのマスに印をつける */
        maze[j][i] = PASSED;

        /* 現在探索中のマスから辿れる次の探索候補をスタックに格納 */
        if (check(i, j - 1)) {
            /* 上方向に辿れる場合 */

            pos.i = i; /* 上方向のマスのi座標 */
            pos.j = j - 1; /* 上方向のマスのj座標 */

            /* 上方向のマスを探索候補としてスタックに格納*/
            push(&stack, &pos);
        }

        if (check(i, j + 1)) {
            /* 下方向に辿れる場合 */

            pos.i = i; /* 下方向のマスのi座標 */
            pos.j = j + 1; /* 下方向のマスのj座標 */

            /* 下方向のマスを探索候補としてスタックに格納*/
            push(&stack, &pos);
        }

        if (check(i - 1, j)) {
            /* 左方向に辿れる場合 */

            pos.i = i - 1; /* 左方向のマスのi座標 */
            pos.j = j; /* 左方向のマスのj座標 */

            /* 左方向のマスを探索候補としてスタックに格納*/
            push(&stack, &pos);
        }
        
        if (check(i + 1, j)) {
            /* 右方向に辿れる場合 */
            pos.i = i + 1; /* 右方向のマスのi座標 */
            pos.j = j; /* 右方向のマスのj座標 */

            /* 右方向のマスを探索候補としてスタックに格納*/
            push(&stack, &pos);
        }
    }

    return ret;
}

int main(void) {

    initStack(&stack);

    /* ゴールの位置を設定 */
    maze[5][3] = GOAL;

    /* スタート位置を(1,3)として開始 */
    if (search(1, 3)) {
        printf("goal\n");
    } else {
        printf("no goal");
    }

    return 0;
}