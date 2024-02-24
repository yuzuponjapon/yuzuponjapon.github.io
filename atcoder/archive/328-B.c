#include <stdio.h>
int main(void)
{
    int n;
    int scan = scanf("%d",&n);

    int tmp;
    int sum = 0;
    int i,j;
    for(i=1;i<n+1;i++) {
        scan = scanf("%d",&tmp);
        for(j=1;j<tmp+1;j++) {
            if(j>=10) {
                if(j/10 == i && j%10 == i) {
                    sum++;
                }
            } else {
                if(j == i) {
                    sum++;
                }
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}