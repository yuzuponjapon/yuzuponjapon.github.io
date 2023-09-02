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

STACK_T stack;s
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