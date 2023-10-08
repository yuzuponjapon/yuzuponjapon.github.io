#include <stdio.h>
int main(void)
{
    char s[17];
    int scan = scanf("%s",&s);

    for (int i = 1; i < 16; i += 2)
    {
        if(s[i] == '0') {
            continue;
        }
        else {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}