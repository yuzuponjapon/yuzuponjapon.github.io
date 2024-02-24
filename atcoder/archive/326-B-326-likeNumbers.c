#include <stdio.h>
int main(void)
{
    int n;
    int scan = scanf("%d",&n);

    int dig3,dig2,dig1;

    while(1) {
        dig3 = n / 100;
        dig2 = (n % 100) / 10;
        dig1 = n % 10;
        if(dig3 * dig2 == dig1) {
            printf("%d%d%d",dig3,dig2,dig1);
            return 0;
        }
        else {
            n++;
        }
    }
    return 0;
}