#include <stdio.h>
int main(void)
{
    int n,m,k;
    int scan = scanf("%d%d%d",&n,&m,&k);

    if(n>m) {
        int tmp = n;
        n = m;
        m = tmp;
    }
    int tmp_n = n;
    int tmp_m = m;
    if(k == 1) printf("%d",n);
    if(k == 2) printf("%d",m);
    int cnt = 2;
    while(1) {
        if(tmp_n == tmp_m) {
            tmp_n += n;
            continue;
        }
        else if(tmp_n < tmp_m) {
            tmp_n += n;
            cnt++;
            if(cnt == k) {
                printf("%d",tmp_n);
                break;
            }
        }
        else {
            tmp_m += m;
            cnt++;
            if(cnt == k) {
                printf("%d",tmp_m);
                break;
            }
        }
    }
    return 0;
}