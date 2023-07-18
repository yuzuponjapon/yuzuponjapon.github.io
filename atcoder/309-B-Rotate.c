#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);

    int a[n][n];
    int b[n][n];

    int i,j,x[n];
    
    for(i=0;i<n;i++) {
        scanf("%d",&x[i]);
        for(j=1;j<=n;j++) {
            x[i]%(10*j)    

            b[i][j] = a[i][j];
        }
    } 
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
        printf("\n");
        printf("\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }

    b[0][0] = a[1][0];
    for(i=1;i<n;i++) 
        b[0][i] = a[0][i-1];

    b[0][n-1] = a[1][n-1];
    for(i=1;i<n;i++) 
        b[i][n-1] = a[i][n-1];

    for(i=n;i>0;i--) 
        b[n-1][i-1] = a[n-1][i];

    for(i=n-1;i>0;i--)
        b[i-1][0] = a[i][0];


    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}