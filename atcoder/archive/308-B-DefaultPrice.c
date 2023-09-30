#include <stdio.h>
#include <string.h>
int main(void)
{
    int i;
    int N,M;
    scanf("%d%d",&N,&M);

    char C[N][21];
    for(i=0;i<N;i++) {
        scanf("%s",C[i]);
    }

    char D[M][21];
    for(i=0;i<M;i++) {
        scanf("%s",D[i]);

    }

    int P[M+1];
    for(i=0;i<M+1;i++) {
        scanf("%d",&P[i]);
    }

    int sum = 0;
    for(i=0;i<N;i++) {
        int flag = 0;
        for(int j=0;j<M;j++) {
            if(strcmp(C[i],D[j])==0) {
                sum += P[j+1];
                flag = 1;
                break;
            }
        }
        if(flag==0) {
            sum += P[0];
        }
    }

    printf("%d\n",sum);
    return 0;
}