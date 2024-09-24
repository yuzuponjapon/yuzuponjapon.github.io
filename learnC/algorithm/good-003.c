#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[11];
    int scan = scanf("%s",s);

    int max = 0;
    int cnt = 0;
    int len = strlen(s);
    for(int i=0;i<len;i++) {
        if(s[i] == 'A'
            || s[i] == 'C'
            || s[i] == 'G'
            || s[i] == 'T') {
                cnt++;
        }
        else {
            cnt = 0;
        }
        if(cnt > max) max = cnt;
    }
    printf("%d\n",max);
    return 0;
}