#include <stdio.h>
int main(void)
{
    int n;
    int a[101];
    int result[101];
    int i;
    int set = 0;

    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if((a[i]%2)==0) {
            result[set] = a[i];
            set++;
        }
    }

    for(i=0;i<set;i++) {
        printf("%d ",result[i]);
    }
    printf("\n");

    return 0;

}