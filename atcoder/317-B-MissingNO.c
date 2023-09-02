#include <stdio.h>
int main(void) 
{
    int n;
    int scan = scanf("%d",&n);
    int a[n];
    int min = 1001;
    for(int i=0;i<n;i++) {
        scan = scanf("%d",&a[i]);
        if(a[i] < min) {
            min = a[i];
        }
    }
    int j;
    int i;
    for(j=min;j<=min+n;j++) {
        for(i=0;i<n;i++) {
            if(a[i] == j) {
                break;
            }
            else {
                if(i == n-1) {
                    printf("%d",j);
                    return 0;
                }
                continue;
            }
        }

    }
    return 0;
}