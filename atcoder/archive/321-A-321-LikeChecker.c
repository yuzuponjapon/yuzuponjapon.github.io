#include <stdio.h>
int main(void)
{
    int n;
    int scan = scanf("%d",&n);

    while(1) {
        int rem = n % 10;
        n /= 10;
        if(n == 0) {
            printf("Yes\n");
            return 0;
        }
        if(rem < n % 10) {
            continue;
        }
        else {
            printf("No\n");
            return 0;
        }
    }
    return 0;
}