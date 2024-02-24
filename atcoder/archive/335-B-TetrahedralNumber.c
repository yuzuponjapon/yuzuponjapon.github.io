#include <stdio.h>
int main(void)
{
    int n;
    int scan = scanf("%d",&n);
    int i,j,k;

    for(i=0;i<=n;i++) {
        for(j=0;j<=n;j++) {
            for(k=0;k<=n;k++) {
                if((i+j+k) <= n) {
                    printf("%d %d %d\n",i,j,k);
                }
                else break;
            }
        }
    }
    return 0;
}