#include <stdio.h>
#include <string.h>
int main(void)
{
    int n;
    int scan = scanf("%d",&n);

    char s[200001];
    char ans[200001];
    scan = scanf("%s",s);
    strcpy(ans,s);

    int q;
    scan = scanf("%d",&q);

    char t[26];
    for(int i=0;i<26;i++) {
        t[i] = i+'a';
    }
    for(int i=0;i<q;i++) {
        char c,d;
        scan = scanf("%*c");
        scan = scanf("%c%*c%c",&c,&d);
        for(int i=0;i<26;i++) {
            if(t[i] == c) {
                t[i] = d;
            }
        }
    }    
    for(int i=0;i<26;i++) {
        if(t[i] != 0) {
            for(int j=0;j<n;j++) {
                if(s[j] == i + 'a') {
                    ans[j] = t[i];
                }
            }
        }
    }
    printf("%s",ans);
    return 0;
}