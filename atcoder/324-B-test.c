#include <stdio.h>
#include <math.h>
int main(void)
{
    double a = 2.0;
    double b = 2;
    double ans;
    long anslong;

    ans = pow(a,b);
    anslong = (long)ans;
    printf("%ld\n",anslong);
    return 0;

}