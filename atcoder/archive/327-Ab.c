#include <stdio.h>
int main(void)
{
    int n;
    char s[101];

    int scan = scanf("%d",&n);
    scan = scanf("%s",s);

    for(int i=0;i<n;i++) {
        if(s[i] == 'a' && s[i+1] == 'b') {
            printf("Yes\n");
            return 0;
        }
        else {
            if(s[i] == 'b' && s[i+1] == 'a') {
                printf("Yes\n");
                return 0;
            }
        }
    }    
    printf("No\n");
    return 0;
}