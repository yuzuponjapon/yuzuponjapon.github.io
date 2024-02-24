#include <stdio.h>
int main(void)
{
    long a,l,r;
    int m;
    long p;

    int scan = scanf("%ld,%d,%ld,%ld",&a,&m,&l,&r);

    printf("%d",(r - ((l - a) / m)+1) / a);
    return 0;

}