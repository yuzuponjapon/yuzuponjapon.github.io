#define MAX_NUM (10+1)

typedef struct QUEUE {
    int tail;
    int head;
    int data[MAX_NUM];
} QUEUE_T;

void initQueue(QUEUE_T *queue){
    queue->head = 0;
    queue->tail = -1;
}

/* ENQUEUEする関数 */
int enqueue(QUEUE_T *queue, int input){
    if((queue->tail + 2) % MAX_NUM == queue->head){
        return -1;
    }
    queue->data[(queue->tail + 1) % MAX_NUM] = input;
    queue->tail = (queue->tail + 1) % MAX_NUM;
}

/* DEQUEUEする関数 */
int dequeue(QUEUE_T *queue){
    int ret = 0;
    if((queue->tail + 1) % MAX_NUM == queue->head){
        return -1;
    }
    ret = queue->data[queue->head];
    queue->head = (queue->head + 1) % MAX_NUM;
    return ret;
}