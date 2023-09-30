#include <stdio.h>
int main(void)
{
    int N;
    int i,j;
    int scan = scanf("%d",&N);

    int tbl[N*5];
    for(i=0;i<N*5;i++) {
        scan = scanf("%d",&tbl[i]);
    }

    int max_no;
    for(j=0;j<N;j++) {
        int max = 0;
        for(i=0;i<N*5;i++) { 
            if(max < tbl[i]) {
                max = tbl[i];
                max_no = i;
            }
        }
        tbl[max_no] = 0;
    }
    int min_no;
    for(j=0;j<N;j++) {
        int min = 100;
        for(i=0;i<N*5;i++) { 
            if(min > tbl[i]) {
                min = tbl[i];
                max_no = i;
            }
        }
        tbl[min_no] = 0;
    }

    float ave;
    float sum = 0;
    for(i=0;i<N*5;i++) {
        sum += tbl[i];
    }
    ave = sum/(N*3);
    printf("%f\n",ave);

    return 0;
}