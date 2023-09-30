#include <stdio.h>
#define yellow 1
#define red 2
#define ques 3

int main(void)
{
    int n,q;
    int scan = scanf("%d%d",&n,&q);

    int flag[100] = {};
    int event;
    int no;
    for(int i=0;i<q;i++) {
        scan = scanf("%d%d",&event,&no);
        if(event == yellow) {
            if(flag[no-1]==0)
                flag[no-1] = yellow;
            else 
                flag[no-1] = red;
        }
        else if(event == red) {
            flag[no-1] = red;
        }
        else {
            if(flag[no-1] == red)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }

}