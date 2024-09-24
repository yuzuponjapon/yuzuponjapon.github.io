#include <stdio.h>
int main(void)
{
    int n;
    char a[100][100];
    char tmp[100];

    int scan = scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scan = scanf("%s",&a[i]);
    }

    for(int i=0;i<n;i++) {
        scan = scanf("%s",tmp);
        for(int j=0;j<n;j++) {
            if(a[i][j] != tmp[j]) {
                printf("%d %d\n",i+1,j+1);
                return 0;
            }
        }
    }
    return 0;
}