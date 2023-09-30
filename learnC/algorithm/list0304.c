#include <stdio.h>
int main(void)
{
    int no;
    do {
        printf("no > ");
        scanf("%d",&no);
    }while(no < 1);

    int d[no];
    printf("d[0] > ");
    scanf("%d",&d[0]);
    for(int i=1;i<no;i++) {
        do { 
            printf("d[%d] > ",i);
            scanf("%d",&d[i]);
        }while( d[i-1] > d[i]);
    }

    int key;
    printf("key > ");
    scanf("%d",&key);

    int start = 0;
    int end = no - 1;
    do {
        int center = (start + end ) / 2;
        if(d[center] == key ) {
            printf("d[%d]\n",center);
            break;
        }
        else {
            if(d[center] < key) {
                start = center + 1;
            }
            else {
                end = center - 1;
            }
        }
    }while( start <= end);
    if(start > end)
        printf("error\n");

    return 0;

}