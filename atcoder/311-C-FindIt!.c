#include <stdio.h>
int main(void)
{
    int n;
    int scan = scanf("%d",&n);
    int a[200001];
    int ans[200001];
    for(int i=1;i<=n;i++) {
        scan = scanf("%d",&a[i]);
    }
    int pointer = 1;
    int tmp;
    for(int i=0;i<n;i++) {
        tmp = a[pointer]; 
        pointer = tmp;
    }
    int i;
    for(i=0;i<n;i++) {
        ans[i] = a[pointer];
        pointer = ans[i];
        if(ans[0] == a[pointer]) break;
    }
    printf("%d\n",++i);
    for(int j=0;j<i;j++) {
        printf("%d ",ans[j]);
    }
    return 0;
}