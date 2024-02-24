#include <stdio.h>
int main(void)
{
    int n,m;
    int scan = scanf("%d%d",&n,&m);

    int a[200000];
    for(int i=0;i<m;i++) {
        scan = scanf("%d",&a[i]);
    }

    int *ap = a;
    for(int i=1;i<=n;i++) {
        if(i != *ap) {
            printf("%d\n",*ap-i);
        }
        else {
            printf("0\n");
            ap++;
        }
    }
    return 0;
}