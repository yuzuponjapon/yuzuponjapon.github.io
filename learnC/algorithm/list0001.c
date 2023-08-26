#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NO 10

int main(void){
    int rnd[NO];
    int ans[NO];
    int max_point[NO];
    int max_p = 0;
    int i;

    srand(time(NULL));
    for(i=0;i<NO;i++) {
        rnd[i] = rand() % 100;
        printf("%2d ",rnd[i]);
    }

    int max = rnd[0];
    for(i=1;i<NO;i++) {
        if(rnd[i] > max) {
            max = rnd[i];
            max_point[max_p++] = i;
        }
    }
printf("\nmax_point = ");
for(int tmp=0;tmp<max_p;tmp++) {
    printf("%d ",max_point[tmp]);
}
printf("\n");
    int ans_p = NO - 1;
    ans[ans_p--] = max;

    
    while(max_p > 0) {
        max_p--;
        rnd[max_point[max_p]] = 0;
        max = rnd[max_point[max_p]];
        for(i=max_point[max_p];i<NO;i++) {
            if(rnd[i] > max) {
                max = rnd[i];
                max_point[max_p++] = i;
            }
        }
    }

    printf("\n");
    for(i=0;i<NO;i++) {
        printf("%2d ",ans[i]);
    }
    printf("\n");

    return 0;
    
}