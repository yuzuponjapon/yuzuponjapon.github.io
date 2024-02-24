#include <stdio.h>
#include <stdlib.h>

typedef struct D {
    int no;
    int data; 
} d;

int cmp(const void *a, const void *b)
{
    d *ap = a;
    d *bp = b;
    return ap->data - bp->data;
}
int main(void)
{
    int n;
    d s[300000];
    int scan = scanf("%d",&n);
    for(int i=0;i<n;i++) {
        s[i].no = i;
        scan = scanf("%d",&s[i].data);
    }

    qsort(s,n,sizeof(d),cmp);

    printf("%d",s[0].no+1);
    for(int i=1;i<n;i++) {
        printf("%d",s[s[i-1].no].data);
    }
    return 0;
}