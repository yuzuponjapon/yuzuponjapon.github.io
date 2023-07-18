#include <stdio.h>

int main(void)
{
    int n;
    int i;
    int scan = scanf("%d",&n);

    char a[n][n+1];
    for(i=0;i<n;i++) {
        scan = scanf("%s",&a[i]);
    }
    for(i=0;i<n;i++) {
        printf("%s",a[i]);
        printf("\n");
    }
}