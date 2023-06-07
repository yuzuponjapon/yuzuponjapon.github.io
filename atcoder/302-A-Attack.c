#include <stdio.h>
int main(void)
{
    long long a,b;

    scanf("%lld %lld",&a,&b);

    if(a%b) {
        printf("%lld",a/b+1);
    }
    else {
        printf("%lld",a/b);
    }

    return(0);
}