#include <stdio.h>
#include <stdbool.h>

#define MEIRO_WIDTH 13
#define MEIRO_HEIGHT 9

#define PATH 0
#define WALL 1
#define GOAL 2
#define PASSED 3

#define MAX_NUM (MEIRO_WIDTH * MEIRO_HEIGHT)
#define QUEUE_SIZE (MAX_NUM + 1)

typedef struct POS {
    int i;
    int j;
} POS_T;

typedef struct QUEUE {
    int tail;
    int head;
    POS_T data[QUEUE_SIZE];
} QUEUE_T;

QUEUE_T queue;

static int maze[MEIRO_HEIGHT][MEIRO_WIDTH] = 
{
    {1,1,1,1,1,1,1,1,1,1,1,1,1},
    {1,0,0,0,0,0,0,0,0,0,1,1,1},
    {1,0,1,1,1,1,1,1,1,0,1,0,1},
    {1,0,0,0,0,0,0,0,1,0,0,0,1},
    {1,0,1,1,1,1,1,0,1,1,1,0,1},
    {1,0,0,0,0,0,0,0,0,0,1,0,1},
    {1,0,1,0,1,0,1,1,1,0,1,0,1},
    {1,0,0,0,0,0,0,0,1,0,0,0,1},
    {1,1,1,1,1,1,1,1,1,1,1,1,1}
};

void initQueue(QUEUE_T *queue) 
{
    queue->head = 0;
    queue->tail = -1;
}

void enqueue(QUEUE_T *queue, POS_T *input)
{
    if((queue->tail + 2) % QUEUE_SIZE == queue->head) {
        printf("queue is full\n");
        return;
    }
}