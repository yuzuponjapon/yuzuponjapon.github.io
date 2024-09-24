#include <stdio.h>
int main(void)
{
    unsigned int a = 0x0f;
    unsigned int b = 0xf0;

    printf("%u\n",a & ~b);
/****
    printf("a=%x\n",a);
    printf("b=%x\n",b);
    printf("~b=%x\n",~b);
    printf("%x\n",a & ~b);
****/

    return 0;
}