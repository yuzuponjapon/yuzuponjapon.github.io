#include <stdio.h>
int main(void)
{
    int n;
    int scan = scanf("%d",&n);

    int s[100][100] = {};

    int a,b,c,d;
    for(int k=0;k<n;k++) {
        scan = scanf("%d%d%d%d",&a,&b,&c,&d);

        for(int i=a;i<b;i++) {
            for(int j=c;j<d;j++) {
                s[i][j] = 1;
            }
        }
    }
    int ans = 0;
    for(int i=0;i<100;i++) {
        for(int j=0;j<100;j++) {
            if(s[i][j] == 1) ans++;
        }
    }
    printf("%d\n",ans);
    return 0;
}