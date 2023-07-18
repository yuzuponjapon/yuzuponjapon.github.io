#include <stdio.h>
int main(void)
{
    int n,p,q,i;
    int scan = scanf("%d%d%d",&n,&p,&q);

    int d[n];
    for(i=0;i<n;i++) {
        scan = scanf("%d",&d[i]);
    }
    
    int min = d[0];
    for(i=1;i<n;i++) {
        if(min > d[i])
            min = d[i];
    }
    if(p < min + q)
        printf("%d\n",p);
    else
        printf("%d\n",min+q);

    return 0;
}