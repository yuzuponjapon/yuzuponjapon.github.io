#include <stdio.h>
#include <math.h>

int main(void)
{
    int a,b;
    int scan = scanf("%d%d",&a,&b);

    int ans = pow(a,b) + pow(b,a);
    printf("%d\n",ans);

    return 0;   
}