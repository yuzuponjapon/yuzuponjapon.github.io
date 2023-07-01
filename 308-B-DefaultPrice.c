#include <stdio.h>
#include <string.h>
int main(void)
{
    int i;
    int N,M;
    scanf("%d%d",&N,&M);
printf("%d %d\n",N,M);

    char C[N][21];
    for(i=0;i<N;i++) {
        scanf("%s",C[i]);
printf("%s ",C[i]);
    }
printf("\n");
    char D[M][21];
    for(i=1;i<=M;i++) {
        scanf("%s",D[i]);
printf("%s ",D[i]);

    }
printf("\n");
    int P[M+1];
    for(i=0;i<M+1;i++) {
        scanf("%d",&P[i]);
printf("%d ",P[i]);
    }
printf("\n");

    int sum = 0;
    for(i=0;i<N;i++) {
        for(int j=1;j<=M+1;j++) {
printf("sum=%d \n",sum);
printf("C[%d]=%s D[%d]=%s\n",i,C[i],j,D[j]);
            if(strcmp(C[i],D[j])==0) {
                sum += P[j];
printf("==  +%d\n",P[j]);

            }
            if(j=M+1)
printf("P=M\n");
                sum += P[0];
printf("  +%d\n",P[0]);
        }
    }

    printf("%d\n",sum);
    return 0;
}