#include <stdio.h>
int main(void)
{
    int k,G,M;
    int scan = scanf("%d%d%d",&k,&G,&M);
    int g = 0;
    int m = 0;
    int cnt = 0;
    while(1) {
        if(m == 0) {
            m = M;
            cnt++;
            if(cnt == k) break;
        }
        if((G - g) < m) {
            m = m - (G - g);
            g = G;
            cnt++;
            if(cnt == k) break;
        }
        else {
            g += m;
            m = 0;
            cnt++;
            if(cnt == k) break;
        }
        if(g == G) {
            g = 0;
            cnt++;
            if(cnt == k) break;
        }
    }    
    printf("%d %d\n",g,m);
    return 0;
}