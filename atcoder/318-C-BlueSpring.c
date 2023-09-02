#include <stdio.h>
int main(void)
{
    int n,d,p;
    int scan = scanf("%d%d%d",&n,&d,&p);

    int f[200000];
    int ppd = p/d;
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i=0;i<n;i++) {
        scanf("%d",&f[i]);
        if(f[i] > ppd){
            cnt1++;
        }
        else {
            if(f[i] == ppd) cnt2++;
        }
    }    

    int d_ans = cnt1 / d;
    if(d > 0) {
        int max = 0;
        int max_no = 0;
        int d_cnt = d_ans * d;
        for(int i=0;i<d_cnt;i++) {
            if(f[i] > max) {
                max = f[i];
                max_no = i;
            }
            f[max_no] = 0;
        }
    }    
    int ans = 0;
    for(int i=0;i<n;i++) {
       ans += f[i]; 
    }

    printf("%d\n",ans);
}