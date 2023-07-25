#include <stdio.h>
int main(void)
{
    int n,d;
    int scan = scanf("%d%d",&n,&d);

    char s[n][d];

    for(int i=0;i<n;i++) {
        scan = scanf("%s",&s[i]);
    }
    int max = 0;
    int tmp = 0;
    for(int i=0;i<d;i++) {
        int o_flag = 1;
        for(int j=0;j<n;j++) {
            if(s[j][i]!='o') {
                o_flag = 0;
                break;
            }
        }
        if(o_flag) tmp++;
        else {
            if(max < tmp) max = tmp;
            tmp = 0;
        }
    }
    printf("%d",max);
    return 0;
}