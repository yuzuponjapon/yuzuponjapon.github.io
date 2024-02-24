#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[101];
    int scan = scanf("%s",s);

    int s_len = strlen(s);

    for(int i=0;i<s_len;i++) {
        printf("%c ",s[i]);
    }
    return 0;
}