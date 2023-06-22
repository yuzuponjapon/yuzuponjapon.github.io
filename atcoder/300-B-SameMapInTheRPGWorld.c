#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int H,W;
    int scan;
    scan=scanf("%d%d",&H,&W);

    char A[H][W+1],B[H][W+1];
    for(int i;i<H;i++) {
        scan=scanf("%s",A);
    }
    for(int i;i<H;i++) {
        scan=scanf("%s",B);
    }


    bool ok = true;
    for(int i=0;i<H;i++) {
        for(int j=0;j<W;j++) {
            if(check_fnc(A,B,i,j,H,W)) {
                printf("Yes\n");
                return 0;
            }
        }
    }
    printf("No\n");
    return 0;
}