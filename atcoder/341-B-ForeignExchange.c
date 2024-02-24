#include <stdio.h>
int main(void)
{
    int n;
    int scan = scanf("%d",&n);

    long a[200001];
    for (int i=1;i<=n;i++) {
        scan = scanf("%ld",&a[i]);
    }
    long s[200000];
    long t[200000];

    for(int i=1;i<n;i++) {
        scan = scanf("%ld%ld",&s[i],&t[i]);
        if(a[i] >= s[i]) {
            a[i+1] = a[i+1] + (t[i] * (a[i] / s[i]));
        }
    } 
    printf("%ld\n",a[n]);
    return 0;
}