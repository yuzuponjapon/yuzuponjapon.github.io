#include <stdio.h>

int main(void)
{
    int n;
    int scan = scanf("%d",&n);

    int p[n];
    int max = 0;
    int cnt = 0;
    for(int i;i<n;i++) {
        scan = scanf("%d",&p[i]);
        if(max <= p[i]) {
            max = p[i];
            cnt++;
        }
    } 
    if(cnt > 1)
        printf("%d\n",max-p[0]+1);
    else
        printf("%d\n",max-p[0]);
    return 0;
}