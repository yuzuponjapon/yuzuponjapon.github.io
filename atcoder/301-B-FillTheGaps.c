#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n-1;i++) {
        printf("%d ",a[i]);
        int diff = a[i]-a[i+1];
        if(diff > 1) {
            for(int j=1;j<diff;j++) {
                printf("%d ",a[i]-j);
            }
        }
        else {
            if(diff < -1) {
                for(int j=-1;j>diff;j--) {
                    printf("%d ",a[i]-j);
                }
            }
        }
    }
    printf("%d\n",a[n-1]);
    return 0;
}