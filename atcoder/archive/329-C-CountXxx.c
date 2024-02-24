#include <stdio.h>
int main(void)
{
    int tbl[26] = {};

    int n;
    int scan = scanf("%d",&n);

    char s[200000];
    scan = scanf("%s",s);


    int cnt = 0;
    for(int i=0;i<n;i++) {
        if(s[i] == s[i+1]) {
            cnt++;
        }
        else {
            if(cnt + 1 > tbl[s[i] - 'a']) {
                tbl[s[i] - 'a'] = cnt + 1;
            }
            cnt = 0;
        }
    }
    int sum = 0;
    for(int i=0;i<26;i++) {
        sum += tbl[i];
    }
    printf("%d\n",sum);
    return 0;
}