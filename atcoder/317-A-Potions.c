#include <stdio.h>
int main(void)
{
    int n,h,x;
    int scan = scanf("%d%d%d",&n,&h,&x);

    int p[1000];
    int diff = x - h;
    for(int i=0;i<n;i++) {
        scan = scanf("%d",&p[i]);
        if(p[i] >= diff) {
            printf("%d",i+1);
            break;
        }
    }

    return 0;
}