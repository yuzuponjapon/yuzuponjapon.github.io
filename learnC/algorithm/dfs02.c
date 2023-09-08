#include <stdio.h>

#define MAX_NUM 10

typedef struct POS {
    int i;
    int j;
} POS_T;

typedef struct STACK {
    int tail;
    POS_T data[MAX_NUM];
} STACK_T;

void initStack(STACK_T *stack){
    stack->tail = -1;
}

int push(STACK_T *stack, int input){
    if(stack->tail >= MAX_NUM - 1){
        return -1;
    }
    stack->data[stack->tail + 1] = input;
    stack->tail = stack->tail + 1;
    return 0;
}

// return の型注意
int pop(STACK_T *stack){
    int ret = 0;
    if(stack->tail == -1){
        return -1;
    }
    ret = stack->data[stack->tail];
    stack->tail = stack->tail - 1;
    return ret;
}
void printStack(STACK_T *stack){
    int i = 0;
    for(i = 0; i <= stack->tail; i++){
        printf("%d,", stack->data[stack->tail - i]);
    }
    printf("\n");
}