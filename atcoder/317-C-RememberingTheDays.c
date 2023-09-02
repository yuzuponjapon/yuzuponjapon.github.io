#include <stdio.h>
int main(void)
{
    int n,m;
    int scan = scanf("%d%d",&n,&m);

    int a[m];
    int b[m];
    int c[m];
    for(int i=0;i<m;i++) {
        scan = scanf("%d%d%d",&a,&b,&c);
    }

    int dis[50] = {};    
    for(int start=1;start<n;start++) {
        for(int i=0;i<m;i++) {
            while(1) {
                if(a[i] == start) {

                }
            }
        }
    }
}