#include <stdio.h>
int main(void)
{
    int n;
    int a[200000];
    long sum = 0;

    int scan = scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scan = scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(a[i] < a[j]) {
                sum += a[j];
            }
        }
        printf("%ld ",sum);
        sum = 0;
    }
    return 0;
}