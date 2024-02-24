#include <stdio.h>
int main(void)
{
    int a,b,d;
    int scan = scanf("%d%d%d",&a,&b,&d);

    do {
        printf("%d ",a);
        a += d;
    }while(a <= b);
    return 0;
}