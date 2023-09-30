#include <stdio.h>
int main(void)
{
    int H,W;
    int scan = scanf("%d%d",&H,&W);

    int a;
    int i,j;
    for(i=0;i<H;i++) {
        for(j=0;j<W;j++) {
            scan = scanf("%d",&a);
            if(a)
                printf("%c",a+64);
            else
                putchar('.');
        }
        putchar('\n');
    }

    return 0;
}