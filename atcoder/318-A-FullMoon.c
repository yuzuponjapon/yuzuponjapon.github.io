#include <stdio.h>
int main(void){
    int n,m,p;
    int scan = scanf("%d%d%d",&n,&m,&p);

    if((n-m) < 0) printf("0\n");
    else
        printf("%d\n",((n-m)/p)+1);
    return 0;
}