#include <stdio.h>
int main(void)
{
    int head = 0;
    int n,q;
    int scan = scanf("%d%d",&n,&q);
    int x[200000],y[200000];
    for(int i=1;i<=n;i++) {
        x[i] = i;
        y[i] = 0;
    }

    int q1,q2;
    char c2;
    for(int i=0;i<q;i++) {
        scanf("%d",&q1);
        if(q1==1) {
            scanf("%c",&c2);
            switch(c2) {
                case 'R': 
            }
        }
        else if(q1==2) {
            if(head+q2 < n) {
                printf("%d %d\n",p[head+q2-1][0],p[head+q2-1][1]);
            }
            else {
                printf("%d %d\n",p[head+q2-n-1][0],p[head+q2-n-1][1]);
            }
        }
    }
    return 0;

}