#include <stdio.h>
#include <limits.h>
int main(void)
{
    int n;
    int scan = scanf("%d",&n);

    long a[n];
    long total = 0;
    long big = 0;
    long small = 0;
    long ans = 0;
    long ave = 0;
    for(int i=0;i<n;i++) {
        scan = scanf("%ld",&a[i]);
        total += a[i];
    }
    ave = total / n;
    for(int i=0;i<n;i++) {
        if(a[i]>ave) 
            big += (a[i]-(ave));
        else if(a[i]<ave)
            small += (ave-a[i]);
    }
    if(big > small)
        ans = small;
    else
        ans = big;
    printf("%ld\n",ans);

    return 0;
}