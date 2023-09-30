#include <stdio.h>

int main(void)
{
    int m,n;
    int scan = scanf("%d%d",&m,&n);

    int rank[m]; 
    for(int i=0;i<m;i++) {
        rank[i] = 1;
    }

    int a[n],b[n];
    for(int i=0;i<n;i++) {
        scan = scanf("%d%d",&a[i],&b[i]);
        rank[b[i]-1] = 0;
    }
    int cnt = 0;
    for(int i=0;i<m;i++) {
        cnt += rank[i];
    }
    if(cnt > 1) {
        printf("-1\n");
        return 0;
    }
    for(int i=0;i<m;i++) {
        if(rank[i]==1) {
            printf("%d\n",i+1);
            return 0;
        }
    }
    return 0;

/*************************
    for(int i=0;i<n;i++) {
        rank[a[i]-1]++;
        if(i>0) {
            for(int j=0;j<i;j++) {
                if(a[i] == b[j])
                    rank[a[j]-1]++;
            }
        }
    }
    int max = 0;
    for(int i=0;i<m;i++) {
        if(rank[i]>max) {
            max = rank[i];
        }
    }

    int cnt;
    int max_cnt =0;
    for(int i=0;i<m;i++) {
        if(rank[i]==max) {
            max_cnt++;
            cnt = i;
        }
    }
    if(max_cnt > 1) {
        printf("-1\n");
        return 0;
    }
    else
        printf("%d\n",cnt+1);

    return 0;
*****************************************/
}