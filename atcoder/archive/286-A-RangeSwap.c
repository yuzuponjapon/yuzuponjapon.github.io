#include <stdio.h>
int main(void)
{
    int n,i;
    scanf("%d",&n);

    int p,q,r,s;
    scanf("%d%d%d%d",&p,&q,&r,&s);

    int a[n+1];
    for(i=0;i<n;i++) {
        scanf("%d ",a+i);
    }

    for(i=1;i<p;i++) {
        printf("%d ",a[i-1]);
    }
    for(i=r;i<=s;i++) {
        printf("%d ",a[i-1]);
    }
    for(i=q+1;i<r;i++) {
        printf("%d ",a[i-1]);
    }
    for(i=p;i<=q;i++) {
        printf("%d ",a[i-1]);
    }
    for(i=s;i<n;i++) {
        printf("%d ",a[i]);
    }

    return 0;
}