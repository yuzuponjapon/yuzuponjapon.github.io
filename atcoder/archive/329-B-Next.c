#include <stdio.h>
int main(void)
{
    int n;
    int tmp;
    int max = 0;
    int next = 0;
    int scan = scanf("%d",&n);

    for(int i=0;i<n;i++) {
        scan = scanf("%d",&tmp);
        if(tmp == max) {
            ;
        }
        else {
            if(tmp > max) {
                next = max;
                max = tmp;
            }
            else {
                if(tmp >= next) {
                    next = tmp;
                }
            }
        }
    }
    printf("%d\n",next);

    return 0;
}