#include <stdio.h>
int main(void)
{
    int n,m;
    int scan = scanf("%d%d",&n,&m);

    char s[1000];
    scan = scanf("%s",s);

    int logot = 0;
    int tmp_t = m;
    int tmp_logot = 0;
    for(int i=0;i<n;i++) {
        if(s[i] == '0') {
            tmp_t = m;
            tmp_logot = logot;
        }
        else {
            if(s[i] == '1') {
                if(tmp_t > 0) {
                    tmp_t--;
                }
                else {
                    if(tmp_logot > 0) {
                        tmp_logot--;
                    }
                    else {
                        logot++;
                    }
                }
            }
            else {
                if(s[i] == '2') {
                    if(tmp_logot > 0) {
                        tmp_logot--;
                    }
                    else {
                        logot++;
                    }
                }
            }
        }
    }
    printf("%d\n",logot);

    return 0;
}