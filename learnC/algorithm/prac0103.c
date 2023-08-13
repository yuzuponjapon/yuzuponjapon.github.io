#include <stdio.h>
#include <limits.h>

int min4(int a,int b,int c,int d)
{
    int min = a;
    if(b < min) min = b;
    if(c < min) min = c;
    if(d < min) min = d;

    return min;
}

int main(void)
{
    printf("min = %d\n",min4(3,6,1,2));
    return 0;
}