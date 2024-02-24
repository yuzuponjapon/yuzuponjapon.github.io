#include <stdio.h>
int main(void)
{
    int n,x;
    int scan = scanf("%d%d",&n,&x);
    
    int cnt=0;
    while(n>0 && x>0) {
        for(int i=1;i<=n;i++) {
            for(int j=2;j<=n-1;j++) {
                for(int k=3;k<=-2;k++) {
                    if(i+j+k == x) cnt++;
                }
            }
        }
        printf("%d\n");
    }
    return 0;
}