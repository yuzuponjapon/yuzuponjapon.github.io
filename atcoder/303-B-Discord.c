#include <stdio.h>
int main(void)
{
    int n,m;
    scanf("%d%d",&n,&m);

    int tbl[50][50] = {};
    for(int i=0;i<n;i++) {
        tbl[i][i] = 1;
    }

    int a,b;
    for(int i=0;i<m;i++) {
        scanf("%d",&a);
        for(int j=0;j<n-1;j++) {
            scanf("%d",&b);
            tbl[a-1][b-1] = 1;
            tbl[b-1][a-1] = 1;
            a = b; 
        }
    }

    int cnt = 0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(tbl[i][j] == 0) cnt++;
        }
    }
    printf("%d\n",cnt/2);

    return 0;
}