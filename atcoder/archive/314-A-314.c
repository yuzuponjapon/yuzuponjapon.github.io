#include <stdio.h>
int main(void)
{
    int n;
    int scan = scanf("%d",&n);

    char pi[100] = "1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    pi[n] = NULL;

    printf("3.%s\n",pi);
    return 0;
}