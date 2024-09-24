#include <stdio.h>
int main(void)
{
    int n;
    int scan = scanf("%d",&n);
    int p[101];
    for(int i=0;i<n;i++) {
       scan = scanf("%d",&p[i]); 
    }    
    int q;
    scan = scanf("%d",&q);
    for(int i=0;i<q;i++) {
        int a,b;
        scan = scanf("%d %d",&a,&b);
        if(p[a-1] < p[b-1]) {
            printf("%d\n",a);
        }
        else {
            printf("%d\n",b);
        }
    }
    return 0;
}