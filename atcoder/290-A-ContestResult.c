#include <stdio.h>
int main(void) 
{
    int n,m,i;
    int a[101],b[101];
    int score = 0;

    scanf("%d %d",&n,&m);

    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); 
    }
    for(i=0;i<m;i++) {
        scanf("%d",&b[i]);
    }

    for(i=0;i<m;i++) {
        score += a[b[i]-1];
    }

    printf("%d\n",score);

    return 0;
}