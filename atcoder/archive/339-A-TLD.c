#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[101];

    int scan = scanf("%s",s);
    int len = strlen(s);

    int i;
    for(i=len-1;i>0;i--) {
        if(s[i] == '.') {
            break;
        }
    }
    for(int j = i+1;j<len;j++) {
        printf("%c",s[j]);
    }
    return 0;
}