#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[101];
    int scan = scanf("%s",s);
    char *p = s;
    int max = 0;
    int len = strlen(s);
    for(int i=0;i<len;i++) {
        for(int j=len-1;j>i;j--) {
            if(*(p+i) == *(p+j)) {
                int k=i+1;
                int l=j-1;
                while(*(p+k)==*(p+l)) {
                    if(k==l) {
                        printf("%d\n",j-i+1);
                        return 0;
                    }
                    k++;
                    l--;
                }
            }
        }
    }
    printf("1\n");
    return 0;
}