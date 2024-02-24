#include <stdio.h>
int main(void)
{
    int n;
    char s[101];

    int scan = scanf("%d",&n);
    scan = scanf("%s",s);

    int flag = 0;
    for(int i=0;i<n-2;i++) {
        if(s[i] == 'A') {
            if(s[i+1] == 'B') {
                if(s[i+2] == 'C') {
                    printf("%d\n",i+1);
                    return 0;
                }
            }
        }
    }
    printf("-1\n");
    return 0;
}