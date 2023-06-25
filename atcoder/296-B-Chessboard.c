#include <stdio.h>
int main(void)
{
    char S[8][9];

    for(int i=0;i<8;i++) {
        scanf("%s",S[i]);
        for(int j=0;j<8;j++) {
           if(S[i][j]=='*') {
               printf("%c%d\n",j+97,8-i);
           } 
        }
    }
    return 0;
}