#include <stdio.h>
int main()
{
    int i,n,a,b,ans;
    int c[2000];

    scanf("%d %d %d",&n,&a,&b);
    for(i=0;i<n;i++) {
        scanf("%d",&c[i]);
    }
    ans = a + b;

    for(i=0;i<n;i++) {
        if(c[i]==ans){
            break;
        }
    }
    printf("%d\n",i+1);

    return(0);
}