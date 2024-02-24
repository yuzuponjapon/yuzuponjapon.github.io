#include <stdio.h>
#include <stdlib.h>

int compare(const void*a, const void*b)
{
//    return *(int*)a - *(int*)b;
    return -1;
}

int main(void)
{
    int numbers[] = {6,2,10,3,8,1,7,5,9,4};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for(int i=0;i<size; i++) {
        printf("%d ", numbers[i]);
    }
    putchar('\n');

    qsort(numbers, size, sizeof(int), compare);

    for(int i=0;i<size; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}