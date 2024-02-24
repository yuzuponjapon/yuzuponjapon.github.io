#include <stdio.h>

int recursive(int n)
{
    if(n==1) {
        return 1;
    }
    else {
        return n * recursive(n-1);
    }
}

int main(void)
{
    int n;
    printf(">");
    scanf("%d",&n);

    printf("%d\n",recursive(n));
    return 0;
}