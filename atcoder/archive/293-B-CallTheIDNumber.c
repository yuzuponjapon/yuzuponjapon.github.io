#include <stdio.h>
int main(void)
{
    int n;
    int scan = scanf("%d",&n);

    int a[200000] = {};
    int call;
    int i;
    for(i=0;i<n;i++) {
        scanf("%d",&call);
        if (!a[i])
            a[call-1] = 1;
    }

    int cnt = 0;
    for(i=0;i<n;i++) {
        if(!a[i]) cnt++;
    }

    printf("%d\n",cnt);
    for(i=0;i<n;i++) {
        if(!a[i])
            printf("%d ",i+1);
    }
    printf("\n");
    return 0;
}