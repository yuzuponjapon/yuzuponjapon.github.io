#include <stdio.h>
int search(int a[], int n, int  key)
{
    a[n] = key;
    int i=0;
    while(1) {
        if(a[i] == key)
            break;
        i++;
    }
    return i == n ? -1: i;
}

int main(void){
    printf("no >");
    int no;
    scanf("%d",&no);

    int *p = calloc(no+1,sizeof(int));
    for(int i=0;i<no;i++) {
        printf("a[%d] >",i);
        scanf("%d",&p[i]);
    }
    int key;
    printf("key >");
    scanf("%d",&key);
    int re = search(p,no,key);
    free(p);
    if(re == -1)
        printf("error\n");
    else
        printf("key = a[%d]\n",re);

    return 0;
}