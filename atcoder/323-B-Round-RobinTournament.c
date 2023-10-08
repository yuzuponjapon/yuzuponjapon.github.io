#include <stdio.h>
int main(void)
{
    int n;
    char s[100];
    int score[2][100] = {};

    int scan = scanf("%d",&n);
    for(int i=0;i<n;i++) {
        score[0][i] = i;
        scan = scanf("%s",s);
        for(int j=0;j<n;j++){
            if(s[j]=='o') {
                score[1][i]++;
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=n-1;j>i;j--) {
            if(score[1][j] > score[1][j-1]) {
                int tmp = score[0][j];
                score[0][j] = score[0][j-1];
                score[0][j-1] = tmp;
                tmp = score[1][j];
                score[1][j] = score[1][j-1];
                score[1][j-1] = tmp;
            }
        }
    }
    for(int i=0;i<n;i++) {
        printf("%d ",score[0][i]+1);
    }
    return 0;
}
