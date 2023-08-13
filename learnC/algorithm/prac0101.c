#include <stdio.h>

int max(int a,int b,int c,int d) {
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    if(d > max) max = d;

    return max;
}

int main(void)
{
    int a=1,b=2,c=3,d=4;
    printf("max = %d\n",max(a,b,c,d));
    return 0;
}