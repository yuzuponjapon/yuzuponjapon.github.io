#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int no;
    do {
        printf("no >");
        scanf("%d",&no);
    } while(no<0);

    int *dp = calloc(no+1,sizeof(int));
    for(int i=0;i<no;i++) {
        printf("no[%d] >",i);
        scanf("%d",dp+i);
    }

    int key;
    do { 
        printf("key >");
        scanf("%d",&key);
    } while(key<0);

    *(dp+no) = key;
    int i;
    for(i=0;i<no;i++) {
        if(key == *(dp+i)) break;
    }
    if(i==no) {
        printf("err\n");
    }
    else {
        printf("%d\n",i);
    }

    free(dp);
    return 0;
}