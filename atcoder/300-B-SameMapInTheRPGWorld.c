#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int H,W;
    int scan;
    scan=scanf("%d%d",&H,&W);

    char A[H][W+1],B[H][W+1];
    for(int i;i<H;i++) {
        scan=scanf("%s",A[i]);
    }
    for(int i;i<H;i++) {
        scan=scanf("%s",B[i]);
    }

    for(int ai=0;ai<H;ai++) {
        for(int aj=0;aj<W;aj++) {
            bool ok = true;
            for(int bi=0;bi<H;bi++) {
                for(int bj=0;bj<W;bj++) {
                    if(A[(ai+bi)%H][(aj+bj)%W]!=B[bi][bj%W]) {
                        ok = false;
                        break;
                    }
                }
                if(!(ok)) break;
            }
            if(ok) {
                printf("Yes\n");
                return 0;
            }
        }
    }
    printf("No\n");
    return 0;
}