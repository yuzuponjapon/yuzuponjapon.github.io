#include <stdio.h>
int main(void)
{
    int n,d;
    int scan = scanf("%d%d",&n,&d);

    char tmp[d];
    int cnt[100] = {};
    for(int i=0;i<n;i++) {
        scan = scanf("%s",tmp);
        for(int j=0;j<d;j++) {
            if(tmp[j]=='o') cnt[j]++;
        }
    }

    int max_tmp = 0;
    int max = 0;
    for(int i=0;i<d;i++) {
        if(cnt[i]==n) {
            max_tmp++;
            if(max_tmp > max) max = max_tmp;
        } else {
                max_tmp = 0;
        }
    }
    printf("%d\n",max);
    return 0;
}