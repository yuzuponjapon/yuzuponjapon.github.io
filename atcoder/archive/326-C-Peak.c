#include <stdio.h>
int main(void)
{
    int n;
    long long m;
    int scan = scanf("%d%lld",&n,&m);

    long long a[300000];
    for(int i=0;i<n;i++) {
        scan = scanf("%lld",&a[i]);
    }
    int max = 0;
    for(int i=0;i < n;i++) {
        int cnt = 0;
        int j = i; 
        for(int j=i;j<n;j++) {
            if(a[i] <= a[j] && a[j] < a[i] + m ) {
                cnt++;
            }
        }
        if(cnt > max) max = cnt;
    }
    printf("%d",max);
    return 0;
}