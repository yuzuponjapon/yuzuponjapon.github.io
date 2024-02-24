#include <stdio.h>
int main(void)
{
    int n;
    int x=0;
    int y=0;

    int scan = scanf("%d",&n);

    for(int i=0;i<n;i++) {
        int tmp_x,tmp_y;
        scan = scanf("%d%d",&tmp_x,&tmp_y);
        x += tmp_x;
        y += tmp_y;
    }
    if(x > y) printf("Takahashi\n");
    else if(y > x) printf("Aoki\n");
    else printf("Draw\n");

    return 0;
}