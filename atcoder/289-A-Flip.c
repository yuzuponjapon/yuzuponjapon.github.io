#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[11];
    gets(s);

    int i;
    for(i=0;i<strlen(s);i++) {
        if(s[i]=='0') {
            putchar('1');
        }
        else
            putchar('0');
    } 
    putchar('\n');

    return 0;
}