#include <stdio.h>
int main(void)
{
    int a[100];
    int cnt = 0;
    int q;
    int scan = scanf("%d",&q);

    for(int i=0;i<q;i++) {
        int t1,t2;
        scan = scanf("%d%d",&t1,&t2);
        if(t1 == 1) {
            a[cnt++] = t2; 
        }
        else {
            printf("%d\n",a[cnt - t2]);
        }
    }
    return 0;
}