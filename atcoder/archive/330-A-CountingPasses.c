#include <stdio.h>
int main(void)
{
    int n,l,tmp;
    int scan = scanf("%d%d",&n,&l);
    int cnt = 0;
    for(int i = 0;i < n;i++) {
        scan = scanf("%d",&tmp);
        if(tmp >= l) cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}