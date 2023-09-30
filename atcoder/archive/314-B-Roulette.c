#include <stdio.h>
int main(void)
{
    int n;
    int scan = scanf("%d",&n);

    int c[n];
    int a[n][37];

    for(int i=0;i<n;i++) {
        scan = scanf("%d",&c[i]);
        for(int j=0;j<c[i];j++) {
            scan = scanf("%d",&a[i][j]);
        }

    }
    int x;
    scan = scanf("%d",&x);

    int ans[n][2];
    int ans_cnt = 0;
    for(int i=0;i < n;i++) {
        for(int j=0;j<c[i];j++) {
            if(a[i][j]==x) {
                ans[ans_cnt][0] = i;
                ans[ans_cnt][1] = c[i];
                ans_cnt++;
                break;
            }

        }

    }

    int min = ans[0][1];
    int min_cnt = 0;
    for(int i=1;i<ans_cnt;i++) {
        if(min > ans[i][1]) {
            min = ans[i][1];
        }
    }
    for(int i=0;i<ans_cnt;i++) {
        if(ans[i][1] == min) {
            min_cnt++;
        }
    }
    printf("%d\n",min_cnt);

    for(int i=0;i<ans_cnt;i++) {
        if(ans[i][1] == min) {
            printf("%d ",ans[i][0]+1);
        }
    }

    return 0;

}