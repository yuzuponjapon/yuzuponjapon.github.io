#include <stdio.h>
int main(void)
{
    int n,i;
    int no_flag=0;
    char s[101], t[101];

    scanf("%d",&n);
    scanf("%s",s);
    scanf("%s",t);

    for(i=0;i<n;i++) {
        if(s[i]==t[i]);
        else {
            if((s[i]=='1')&&(t[i]=='l') 
            || (s[i]=='l')&&(t[i]=='1'));
            else {
                if((s[i]=='0')&&(t[i]=='o') 
                || (s[i]=='o')&&(t[i]=='0'));
                else {
                    no_flag = 1;
                    break;
                }
            }
        }
    }

    if(no_flag==0)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}