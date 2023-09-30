#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int tmp = n;

    int digit=0;
    while(tmp!=0) {
        tmp /= 10;
        digit++;
    }
        
    if(digit<4)
        printf("%d\n",n);
    else {
        int ex=1;
        for(int i=0;i<digit-3;i++) {
            ex *= 10;
        }
        printf("%d\n",n-(n%ex));
    }
    return 0;
}