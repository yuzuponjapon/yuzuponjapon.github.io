#include <stdio.h>
#include <string.h>
int main(void)
{
    int n,m;
    int scan = scanf("%d%d",&n,&m);

    char s[n][m];
    for(int i=0;i<n;i++) {
        scan = scanf("%s",&s[i]);
    }
    char *s1 = "###.";
    char *s2 = "....";
    char *s3 = ".###";
    int i,j;
    for(i=0;i<n-8;i++) {
        for(j=0;j<m-8;j++) {
            if(strncmp(&s[i][j],s1,4)==0 &&
               strncmp(&s[i+1][j],s1,4)==0 &&
               strncmp(&s[i+2][j],s1,4)==0 &&
               strncmp(&s[i+3][j],s2,4)==0 &&
               strncmp(&s[i+5][j+5],s2,4)==0 &&
               strncmp(&s[i+6][j+5],s3,4)==0 &&
               strncmp(&s[i+7][j+5],s3,4)==0 &&
               strncmp(&s[i+8][j+5],s3,4)==0 
            )  printf("%d %d\n",i+1,j+1);
        }
    }
    return 0;
}