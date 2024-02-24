#include <stdio.h>
int main(void)
{
    int M,D;
    int y,m,d;

    int scan = scanf("%d%d",&M,&D);
    scan = scanf("%d%d%d",&y,&m,&d);

    if(d+1 > D) {
        d = 1;
        if(m+1 > M) {
            m = 1;
            y++;
        }
        else {
            m++;
        }
    }    
    else {
        d++;
    }
    printf("%d %d %d\n",y,m,d);
    return 0; 
}