#include <stdio.h>

int main(void)
{
    int i;
    int flag=0;
    int n;
    unsigned int d;
    unsigned int t[101];

    scanf("%d",&n);
    scanf("%u",&d);
    for(i=0;i<n;i++) {
        scanf("%u",&t[i]);
    }

    for(i=0;i<n-1;i++) {
        if(t[i+1]-t[i] <= d) {
            printf("%u\n",t[i+1]);
            flag = 1;
            break;
        }
    }

    if(flag==0) {
        printf("-1\n");
    }

    return(0);
}