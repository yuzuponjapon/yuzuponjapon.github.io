#include <stdio.h>
int main(void)
{
    int n;
    int scan = scanf("%d",&n);
    int w,x;
    int a[24] = {};

    for(int i=0;i<n;i++) {
        scan = scanf("%d%d",&w,&x);
        a[x] += w;
    }

    int max = 0;
    for(int i=0;i<24;i++) {
        int tmp = 0;
        for(int j=0;j<9;j++) {
            tmp += a[(i+j)%24];
        }
        if(tmp > max) max = tmp;
    }
    printf("%d",max);
    return 0;
}