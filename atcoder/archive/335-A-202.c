#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[100];
    int scan = scanf("%s",s);
    s[strlen(s)-1] = '4';
    printf("%s\n",s);
    return 0;
}