#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[][4] = {"ACE","BDF","CEG","DFA","EGB","FAC","GBD"};
    char s[4];
    int scan = scanf("%s",s);

    for(int i=0;i<7;i++) {
        if(strcmp(s,a[i])==0) {
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");

    return 0;
}