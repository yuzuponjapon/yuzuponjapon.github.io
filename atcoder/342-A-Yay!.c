#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[101];
    int scan = scanf("%s",s);

    char tmp1,tmp2;
    int len = strlen(s);
    tmp1 = s[0];
    if(s[0] == s[1]) {
        tmp1 = s[0];
        for(int i=2;i<len;i++) {
            if(tmp1 != s[i]) {
                printf("%d\n",i+1);
                return 0;
            }
        }
    }
    else {
        if(s[0] == s[2]) {
            printf("2\n");
            return 0;
        }
        else {
            printf("1\n");
            return 0;
        }
    }
    return 0;
}