#include <stdio.h>
int main(void)
{
    int h,w,n;
    int scan = scanf("%d%d%d",&h,&w,&n);

    char s[100][101];
    for(int i=0;i<h;i++) {
        for(int j=0;j<w;j++) {
            s[i][j] = '.';
        }
        s[i][w] = '\n';
    }

    int dir = 0;
    int row = 0;
    int col = 0;

    int move_row[4] = {-1,0,1,0};
    int move_col[4] = {0,1,0,-1};

    while(n--) {
        if(s[row][col] == '.') {
            s[row][col] = '#';
            dir++;
        }
        else {
            s[row][col] = '.';
            dir +3;
        }
        dir %= 4;
        row = (h + row + move_row[dir]) % h;
        col = (w + col + move_col[dir]) % w;
    }
    for(int i=0;i<h;i++) {
        printf("%s",s[i]);
    }
    return 0;
}