#include <stdio.h>
void disp(long a)
{
    if(a <= 0) return;
    disp(a / 5);
    printf("%ld",(a % 5) * 2);
}
int main(void)
{
    long n;
    int scan = scanf("%ld",&n);

    if(n == 1) printf("0\n");
    else disp(n-1);

    return 0;
}