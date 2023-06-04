#include <stdio.h>
int main() {
    int n,i;
    int flg = 0;
    char s[100];

    scanf("%d",&n);
    scanf("%s",s);

    for(i=0;i<n;i++) {
        if(s[i]=='|') {
            if(flg==0) {
                flg = 1;
            }
            else {
                printf("out\n");
                break;
            }
        }
        else {
            if(s[i]=='*') {
                if(flg==0) {
                    printf("out\n");
                    break;
                }
                else {
                    printf("in\n");
                    break;
                }
            }
        }
    }
    return(0);
}
 
