#include <stdio.h>
int main(void)
{
    int n;
    int scan = scanf("%d",&n);

    char s[n];
    scan = scanf("%s",s);

    int a_flag = 0;
    int b_flag = 0;
    int c_flag = 0;

    for(int i=0;i<n;i++) {
        if(s[i]=='A') a_flag = 1;
        else if(s[i]=='B') b_flag = 1;
        else if(s[i]=='C') c_flag = 1;

        if(a_flag && b_flag && c_flag) {
            printf("%d",i+1);
            return 0;
        }
    }
    return 0;
}