#include <stdio.h>
#include <stdbool.h>
typedef struct stc1 {
    int tail;
    int x[1000];
    int y[1000];
} stc2;

char data[1001][1001];
int h,w;
stc2 stc;

bool check(int i, int j)
{
    bool ret = true;
    if(i < 0 || j < 0 || i >= h || j >= w) {
        ret = false;
    }
    else {
        if(data[i][j] == '.') {
            ret = false;
        }
    }
    return ret;
        
}

int main(void)
{
    int check_x[8] = {-1,-1,-1,0,0,1,1,1};
    int check_y[8] = {-1,0,1,-1,1,-1,0,1};
    stc.tail = -1;

    int scan = scanf("%d%d",&h,&w);

    for(int i=0;i<h;i++) {
        scan = scanf("%s",&data[i]);
    }

    int tmp_x,tmp_y;
    int cnt = 0;

    for(int i=0;i<h;i++) {
        for(int j=0;j<w;j++) {
            if(check(i,j)) {
                for(int k=0;k<8;k++) {
                    tmp_x = check_x[k] + i;
                    tmp_y = check_y[k] + j;
                    if(check(tmp_x,tmp_y)) {
                        stc.tail++;
                        stc.x[stc.tail] = tmp_x;
                        stc.y[stc.tail] = tmp_y;
                        data[tmp_x][tmp_y] = '.';
                    }
                }
                data[i][j] = '.';
                cnt++;
            }
            while(stc.tail >= 0) {
                int tmp_i = stc.x[stc.tail];
                int tmp_j = stc.y[stc.tail];
                stc.tail--;
                for(int k=0;k<8;k++) {
                    tmp_x = check_x[k] + tmp_i;
                    tmp_y = check_y[k] + tmp_j;
                    if(check(tmp_x,tmp_y)) {
                        stc.tail++;
                        stc.x[stc.tail] = tmp_x;
                        stc.y[stc.tail] = tmp_y;
                        data[tmp_x][tmp_y] = '.';
                    }
                }
            }
        }
    }
    printf("%d\n",cnt);
    return 0;
}