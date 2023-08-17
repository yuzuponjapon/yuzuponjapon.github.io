#include <stdio.h>
int main(void){
    int n,m;
    int scan = scanf("%d%d",&n,&m);

    int c[100];
    int p[100];
    int s[100][100];
    double ave[100] = {};
    double ave_pri[100];
    for(int i=0;i<n;i++) {
        scan = scanf("%d%d",&c[i],&p[i]);
        for(int j=0;j<p[i];j++) {
            scan = scanf("%d",&s[i][j]);
            ave[i] += s[i][j];
        }
        ave[i] /= p[i];
        ave_pri[i] = ave[i] / c[i];
    }
    double max = ave_pri[0];
    int max_no;
    for(int i=1;i<n;i++) {
        if(ave_pri[i] > max) {
            max = ave_pri[i];
            max_no = i;
        }
    }
    printf("max = %lf\n",max);
    printf("%lf\n",m/max);

    return 0;
}