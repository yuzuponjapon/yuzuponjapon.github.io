#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[101];
    gets(s);

    int i;
    for(i=0;i<strlen(s);i++) {
        if((s[i]<'a')||(s[i]>'z')) {
            printf("%d\n",i+1);
            break;
        }
    }

    return 0;

}