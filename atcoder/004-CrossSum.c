#include <stdio.h>
int main(void)
{
    int h,w;
    int scan = scanf("%d%d",&h,&w); 

    int s[2000][2000];
    int h_sum[2000] = {};
    int w_sum[2000] = {};

    for(int i=0;i<h;i++) {
        for(int j=0;j<w;j++) {
            int tmp;
            scan = scanf("%d",&tmp);
            s[i][j] = tmp;
            h_sum[i] += tmp;
            w_sum[j] += tmp;
        }
    }

    for(int i=0;i<h;i++) {
        for(int j=0;j<w;j++) {
            printf("%d ",h_sum[i] + w_sum[j] - s[i][j]);
        }
        printf("\n");
    }
    return 0;
}