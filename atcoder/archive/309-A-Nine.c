#include <stdio.h>
int main(void)
{
    int a,b;
    scanf("%d%d",&a,&b);

    if(!(a==b-1)) {
        printf("No\n");
        return 0;
    }
    if(a%3==0) {
        printf("No\n");
        return 0;
    }
    printf("Yes\n");
    return 0;

}