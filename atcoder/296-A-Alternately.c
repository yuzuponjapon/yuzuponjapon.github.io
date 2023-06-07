#include <stdio.h>
int main(void) 
{
    int flag = 0;
    int n;
    char s[101];

    scanf("%d",&n);
    scanf("%s",s);

    int i;
    for(i=0;i<n-1;i++) {
        if(s[i]==s[i+1]) {
            flag = 1;
            break;
        }
    }
    if(flag==1) {
        printf("No\n");
    }
    else {
        printf("Yes\n");
    }

    return 0;
}