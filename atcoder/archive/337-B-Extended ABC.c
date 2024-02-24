#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[101];
    int scan = scanf("%s",s);

    int n = strlen(s);
    int flag = 0;
    if(n == 0) {
        printf("Yes\n");
    }

    for(int i=0;i<n;i++) {
        switch(flag) {
            case 0:
                if(s[i]=='A') flag = 0;
                else if(s[i]=='B') flag = 1;
                else if(s[i]=='C') flag = 2; 
                else flag = 3;
                break;
            case 1:
                if(s[i]=='B') flag = 1;
                else if(s[i]=='C') flag = 2;
                else flag = 3;
                break;
            case 2:
                if(s[i]=='C') flag = 2;
                else flag = 3;
        }
        if(flag==3) {
            printf("No\n");
            break;
        }
    }
    if(flag!=3) printf("Yes\n");
    return 0;
}