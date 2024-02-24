#include <stdio.h>
#include <stdlib.h>

int cmp(const void *n1, const void *n2)
{
    if(*(long *)n1 > *(long *)n2) {
        return 1;
    }
    else if(*(long *)n1 < *(long *)n2) {
        return -1;
    }
    else {
        return 0;
    }
}

int main(void)
{
    long num[] = { 7, 4, 5, 1, 8, 0, 3, 2, 9, 6}
    for(int i=0;i<10)
    printf("%ld ");

    qsort(num, sizeof(num), sizeof(num[0]), cmp);

}