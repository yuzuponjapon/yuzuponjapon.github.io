#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int n,m;
    int scan = scanf("%d%d",&n,&m);
    
    char s[200000];
    char t[200000];
    scan = scanf("%s",s);
    scan = scanf("%s",t);

    bool flag = true;
    int s_start = 0;
    int t_start = 0;

    for(int i=0;i<n;i++) {
        if(s[i] == t[t_start]) {
            t_start++;
            continue;
        }
        else {
            if(s[i-1] != t[m-1] || ) {
                flag = false;
                break;
            }
            t_start = 0;
            for(int j=0;j<i || j<m;j++) {
                if(s[i] == t[t_start]) {
                    t_start++;
                    break;

                }
            }
        }
    }
/****
    for(int i=0;i<n;i++) {
        if(s[i] == t[t_start]) {
            t_start++;
            continue;
        }
        else {
            t_start = 0;
            for(int j=0;j<i || j<m;j++) {
                if(s[i] == t[t_start]) {
                    t_start++;
                    flag = true;
                    break;
                }
                else {
                    flag = false;
                }
            }
            if(flag == false) {
                break;
            }
        }
    }
    ******/
    if(true){
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    
    return 0;

}