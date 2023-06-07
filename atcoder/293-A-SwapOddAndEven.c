#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[101];
    int i;

    (void)scanf("%s",s);

    for (i = 1; i <= strlen(s) / 2; i++)
    {
        putchar(s[(2*i)-1]);
        putchar(s[(2*i-1)-1]);
    }

    return 0;
}