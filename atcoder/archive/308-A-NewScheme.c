#include <stdio.h>
int main(void)
{
    int S[8];
    int i;
    for(i=0;i<8;i++) {
        scanf("%d",&S[i]);
    }
    for(i=0;i<7;i++) {
        if(S[i]>S[i+1]) {
            printf("No\n");
            return 0;
        } 
    }
    for(i=0;i<8;i++) {
        if(S[i]<100 || S[i]>675) {
            printf("No\n");
            return 0;
        }
        if(S[i]%25 != 0) {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");

    return 0;
}