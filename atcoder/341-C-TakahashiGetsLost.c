#include <stdio.h>
int main(void)
{
    int h,w,n;
    int scan = scanf("%d%d%d",&h,&w,&n);

    char t[501];
    scan = scanf("%s",t);

    char s[500][501];
    for(int i=0;i<h;i++) {
        scan = scanf("%s",s[i]);
    }

    int cnt = 0;
    for(int i=1;i<h-1;i++) {
        for(int j=1;j<w-1;j++) {
            if(s[i][j] == '#') continue;
            int tmp_i = i;
            int tmp_j = j;
            int k;
            for(k=0;k<n;k++) {
                switch (t[k]) {
                    case 'L':   tmp_j--;
                                break;
                    case 'R':   tmp_j++;
                                break;
                    case 'U':   tmp_i--;
                                break;
                    case 'D':   tmp_i++;
                                break;
                    default:    break;
                }
                if(s[tmp_i][tmp_j] == '#') break;
            }
            if(k == n) cnt++;
        }
    }
    printf("%d\n",cnt);
    return 0;
}