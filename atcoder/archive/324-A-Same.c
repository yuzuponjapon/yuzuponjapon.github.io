#include <stdio.h>
int main(void)
{
    int n;
    int scan = scanf("%d",&n);

    int a;
    scan = scanf("%d",&a);
    for(int i = 0;i<=n;i++) {
        int tmp;
        scan = scanf("%d",&tmp);
        if(a == tmp) {
            continue;
        }
        else {
            printf("No\n");
            return 0;
        }
    }
        printf("Yes");
        return 0;
}