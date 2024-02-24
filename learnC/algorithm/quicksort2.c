#include <stdio.h>
#include <stdlib.h>

int cmpnum(const void * n1, const void * n2)
{
    if(*(long *)n1 > *(long *)n2) {
        return 1;    
    }else {
        return -1;
    }

}


int main(void)
{

    long num[] = {22,30,2,15,68,55,73,93,32,62};
    
    for(int i=0;i<sizeof(num)/sizeof(num[0]);i++) {
        printf("%d ",num[i]);
    }
    printf("\n");

    qsort(num, sizeof(num), sizeof(num[0]), sizeof(long), cmpnum);

    for(int i=0;i<sizeof(num)/sizeof(num[0]);i++) {
        printf("%d ",num[i]);
    }
    printf("\n");

    return 0;
}