#include <stdio.h>
int main(void)
{
    int n;
    int scan = scanf("%d",&n);

    int cnt = 0;
    for(int i=1;i<=n;i+=2) {
        int tmp_cnt = 0;
        for(int j=1;j<=n;j+=2) {
            if(i % j == 0) {
                tmp_cnt++;
            }
        }
        if(tmp_cnt == 8) cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}