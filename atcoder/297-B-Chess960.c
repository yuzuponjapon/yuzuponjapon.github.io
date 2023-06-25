#include <stdio.h>
int main(void)
{
    char S[9];
    int scan = scanf("%s",S);
    char *sp = S;
 
    int x,y;
    int flag = 0;
    for(int i=0;i<8;i++) {
        if(*(sp+i)=='B' && flag == 0) {
            x = i;
            flag = 1;
        }
        else {
            if(*(sp+i)=='B' && flag == 1) {
                y = i;
                if(((y-x)%2) == 0) {
                    printf("No\n");
                    return 0;
                }
            }
        }
    }
 
    flag = 0;
    for(int i=0;i<8;i++) {
        if(*(sp+i) == 'R') {
            if(flag == 0) {
                flag = 1;
            }
            else if(flag == 1) {
                printf("No\n");
                return 0;
            }
            else if(flag == 2) {
                printf("Yes\n");
                return 0;
            }
        }
        if(*(sp+i) == 'K') {
            if(flag == 0) {
                printf("No\n");
                return 0;
            } else if(flag == 1) {
                flag = 2;
            }
        }
    }
 
    return 0;
}