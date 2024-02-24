#include <stdio.h>
int main(void)
{
    int b,g;
    int scan = scanf("%d%d",&b,&g);
    if(b>g) printf("Bat\n");
    else printf("Glove\n");
    return 0;
}