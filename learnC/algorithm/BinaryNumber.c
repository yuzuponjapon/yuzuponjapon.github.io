#include <stdio.h>
#include <math.h>

void bindisp(int n)
{
    if(n <= 0) return;
    bindisp(n / 2);
    printf("%01d",n % 2);
}

int main(void)
{
    int num;
    int ans = 0;
    int mul = 1;
    printf("num >");
    scanf("%d",&num);

    bindisp(num);
/**
    while(num) {
        ans += (num % 2) * mul;
        mul *= 10;
        num /= 2;
    }
    printf("%d\n",ans);
**/
    return 0;
}