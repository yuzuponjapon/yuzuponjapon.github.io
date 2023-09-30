#include <stdio.h>

int main(void)
{
    int n,m;
    int scan = scanf("%d%d",&n,&m);

    char s[200020];
    scan = scanf("%s",s);

    int c[200020];
    int d[200020];
    for(int i=0;i<n;i++) {
        scan = scanf("%d",&d[i]);
        c[d[i]] = s[i];
    }

    char tmp;
    for(int i=0;i<n;i++) {
        tmp = s[i];
        s[i] = c[d[i]];
        c[d[i]] = tmp;
    }

    printf("%s\n",s);

    return 0;
}
