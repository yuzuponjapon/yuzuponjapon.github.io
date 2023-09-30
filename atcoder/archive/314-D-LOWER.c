#include <stdio.h>
int main(void)
{
    int n;
    int scan = scanf("%d",&n);

    char s[500050];
    scan = scanf("%s",s);

    int q;
    scan = scanf("%d",&q);

    int t[500000],x[500000];
    char c[500000];
    int last = 0;
    for(int i=0;i<q;i++) {
        scan = scanf("%d%d%*c%c",&t[i],&x[i],&c[i]);
        if(t[i]!=1)last = i;
    }
    
    for(int i=0;i<last;i++) {
        if(t[i] == 1) s[x[i]-1] = c[i];
    }
    int diff = 'A' - 'a';
    if(t[last]==2) {
        for(int i=0;i<n;i++) {
            if('A'<=s[i] && s[i]<='Z') s[i] += 32;
        }
    }
    if(t[last]==3) {
        for(int i=0;i<n;i++) {
            if('a'<=s[i] && s[i]<='z') s[i] -= 32;
        }
    }
    for(int i=last;i<q;i++) {
        if(t[i] == 1) s[x[i]-1] = c[i];
    }
    
    printf("%s\n",s);

    return 0;

}