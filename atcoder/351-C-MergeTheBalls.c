#include <stdio.h>
int tail = 0;
int a[200000];
void ope()
{
    if(tail==1) return;
    if(a[tail-1] != a[tail-2]) return;
    if(a[tail-1] == a[tail-2]) {
        a[tail-2]++;
        tail--;
        ope();
    }
}
int main(void)
{
    int n;

    int scan = scanf("%d",&n);

    for(int i=0;i<n;i++) {
        scan = scanf("%d",&a[tail]);
        tail++;
        ope();
    }
    printf("%d\n",tail);
    return 0;
}