#include <stdio.h>
int main(void)
{
    int n,m;
    int scan = scanf("%d%d",&n,&m);

    int tbl[200001] = {};

    int tmp;
    int max_no = 0;
    int max = 0;

    for(int i=0;i<m;i++) {
        scan = scanf("%d",&tmp);
        tbl[tmp]++;
        if(tmp == max_no) {
            ;
        }
        else {
            if(tbl[tmp] == tbl[max_no]) {
                if(tmp < max_no) {
                    max_no = tmp;
                }
            }
            else {
                if(tbl[tmp] > tbl[max_no]) {
                    max_no = tmp;
                }
            }
        }

        printf("%d\n",max_no);
    }

    return 0;
}