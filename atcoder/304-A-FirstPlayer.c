#include <stdio.h>
#include <limits.h>
int main(void)
{
    int n,i;
    char s[100][11];
    unsigned int a[100];

    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%s %u",s[i],&a[i]);
    }
    unsigned int min_age = UINT_MAX;
    int min_no;
    for(i=0;i<n;i++) {
        if(min_age > a[i]) {
            min_age = a[i];
            min_no = i;
        }
    }

    for(i=0;i<n;i++) {
        if((i+min_no)<n) {
            printf("%s\n",s[i+min_no]);
        }
        else {
            printf("%s\n",s[i+min_no-n]);
        }
    }

    return 0;
}