#include <stdio.h>
int main(void)
{
    int no;
    scanf("%d",&no);
    int ans=0;

    for(int i=1;i<=no;i++) {
       ans += i; 
    }
    printf("0~%d = %d\n",no,ans);
    printf("gausu = %d\n",(1 + no) * no/2);
    return 0;
}