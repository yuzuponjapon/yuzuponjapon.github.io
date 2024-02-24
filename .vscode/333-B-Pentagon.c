#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char s1,s2,t1,t2;
    char ret;
    int scan = scanf("%c%c",&s1,&s2);
    scan = scanf("%c",&ret);
    scan = scanf("%c%c",&t1,&t2);

    int abs_s = abs(s1-s2);
    if((abs_s == 1) || (abs_s == 4)) abs_s = 1;
    else abs_s = 2;
    int abs_t = abs(t1-t2);
    if((abs_t == 1) || (abs_t == 4)) abs_t = 1;
    else abs_t = 2;

    if(abs_s == abs_t) {
        printf("Yes\n");
    }    
    else {
        printf("No\n");
    }
    return 0;
}