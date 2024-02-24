#include <stdio.h>
int main(void)
{
    int n;
    int cnt = 0;
    int scan = scanf("%d",&n);

    do {
        if(n % 2 == 0) cnt++;
        else break;

        n = n / 2;
    }while(n>0);

    printf("%d",cnt);
    return 0;
}