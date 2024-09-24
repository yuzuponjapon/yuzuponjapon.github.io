#include <stdio.h>
int main(void)
{
    int n;
    int a;
    int b;
    int scan = scanf("%d",&n);

    scan = scanf("%d",&a);
    for(int i=0;i<n-1;i++) {
        scan = scanf("%d",&b);
        if(a != b) {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}