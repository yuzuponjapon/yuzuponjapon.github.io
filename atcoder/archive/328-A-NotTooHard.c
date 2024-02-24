#include <stdio.h>
int main(void)
{
    int n,x;
    int scan = scanf("%d%d",&n,&x);

    int sum = 0;
    for(int i=0;i<n;i++) {
        int  tmp;
        scanf("%d",&tmp);
        if(tmp <= x) {
            sum += tmp;
        }
    }
    printf("%d\n",sum);
    return 0;
}