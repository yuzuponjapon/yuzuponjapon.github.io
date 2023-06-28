#include <stdio.h>
#define yellow 1
#define red 2

int main(void)
{
    int N,Q;
    int scan = scanf("%d%d",&N,&Q);
    int flag[101] = {};

    int event,no;
    for(int i=0;i<Q;i++) {
        scan = scanf("%d%d",&event,&no);
        switch(event) {
            case yellow:
                if(flag[no])
                    flag[no] = red;
                else
                    flag[no] = yellow;
                break;
            case red:
                flag[no] = red;
                break;
            default:
                if(flag[no]==red)
                    printf("Yes\n");
                else
                    printf("No\n");
        }
    }
    return 0;
}