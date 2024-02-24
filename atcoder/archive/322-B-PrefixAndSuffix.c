#include <stdio.h>
#include <string.h>

int main(void)
{
    int n,m;
    char s[101];
    char t[101];

    int scan = scanf("%d%d",&n,&m);
    scan = scanf("%s",s);
    scan = scanf("%s",t);

    if(strncmp(&s[0],&t[0],n)==0) {
        if(strncmp(&s[0],&t[m-n],n)==0) {
            printf("0\n");
        }
        else {
            printf("1\n");
        }
    }
    else {
        if(strncmp(&s[0],&t[m-n],n)==0) {
            printf("2\n");
        }
        else {
            printf("3\n");
        }

    }
    return 0;
}