#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
    srand(time(NULL));
    printf("size >");
    int size;
    scanf("%d",&size);
    int a[size];
    int *ap = a;
    for(int i=0;i<size;i++) {
        *(ap+i) = rand()%10;
        printf("%d ",*(ap+i));
    }
    printf("\n");
    for(int i=0;i<size/2;i++) {
        int tmp = a[i];
        a[i] = a[size-1-i];
        a[size-1-i] = tmp;
    }
    for(int i=0;i<size;i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}