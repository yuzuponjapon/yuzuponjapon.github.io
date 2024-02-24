#include <stdio.h>
int main(void)
{
    long n;
    int scan = scanf("%ld",&n);
    long n1 = n;
    int cnt = 0;
    do {
        n1 /= 2;
        cnt++;
    }while(n1>2);
    long n2 = 2;
    for(int i=0;i<cnt;i++) {
        n2 *= 2; 
    }
    printf("%ld\n",(n * (cnt+2)) - n2);
    return 0;
}