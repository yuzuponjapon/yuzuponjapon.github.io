#include <stdio.h>

int main(void)
{
    int N,T;
    scanf("%d%d",&N,&T);

    int C[N], R[N];
    int t_max,max = 0;
    int t_no,no = 0;

    for(int i=0;i<N;i++) scanf("%d",&C[i]);
    for(int i=0;i<N;i++) scanf("%d",&R[i]);
    
    for(int i=0;i<N;i++) {
        if(C[i]==T) {
            if(R[i] > t_max) {
                t_max = R[i]; 
                t_no = i;
            }
        }
        else {
            if(C[i]==C[0]) {
                if(R[i] > max) {
                    max = R[i];
                    no = i;
                }
            }
        }
    }
    if(t_max > 0)
        printf("%d\n",t_no+1);
    else
        printf("%d\n",no+1);

    return 0;
}