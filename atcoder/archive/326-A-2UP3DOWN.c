#include <stdio.h>
int main(void)
{
    int x,y;
    int scan = scanf("%d%d",&x,&y);    
    if(x-y > 0) {
        if(x-y <= 3) {
            printf("Yes\n");
            return 0;
        }
    }
    else {
        if(y-x <= 2) {
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
    return 0;
}