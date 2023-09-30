#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);

    char s[8];
    int cnt=0;

    for(int i=0;i<n;i++) {
        scanf("%s",s);
        if(s[0]=='F')
            cnt++;
    }

    if(cnt>n/2)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}