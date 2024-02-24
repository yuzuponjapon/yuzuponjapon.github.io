#include <stdio.h>
int main(void)
{
    int n;
    int scan = scanf("%d",&n);

    typedef struct s1{
        int index;
        int score;
    }s2;
    s2 s[100] = {};
    char tmp[100];
    for(int i=0;i<n;i++) {
        scan = scanf("%s",tmp);
        s[i].index = i;
        for(int j=0;j<n;j++) {
            if(tmp[j] == 'o') {
                s[i].score++;
            }
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=n-1;j>i;j--) {
            if(s[j].score > s[j-1].score) {
                s2 stmp = s[j];
                s[j] = s[j-1];
                s[j-1] = stmp;
            }
        }
    }

    for(int i=0;i<n;i++) {
        printf("%d ",s[i].index + 1);
    }
    return 0;
}