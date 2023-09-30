#include <stdio.h>

int check_word(int h,int w, char t[h][w+1], int i, int k, int j, int l)
{
    if( t[i+k][j+l]=='n' &&
        t[i+k*2][j+l*2]=='u' &&    
        t[i+k*3][j+l*3]=='k' &&
        t[i+k*4][j+l*4]=='e' ) {
        
        for(int x=0;x<5;x++) {
            printf("%d %d\n",i+k*x+1,j+l*x+1);
        }
        return 1;
    }
    return 0;
}

int main(void)
{
    int h,w;
    scanf("%d%d",&h,&w);

    char tbl[h][w+1];
    for(int i=0;i<h;i++) {
        scanf("%s",tbl[i]);
    }
    for(int i=0;i<h;i++) {
        for(int j=0;j<w;j++) {
            if(tbl[i][j]=='s') {
                /** 上 i -1  j 0 **/
                if( (!((i-4)<0)) && (check_word(h,w,tbl,i,-1,j,0)==1)) 
                    return 0; 
                /** 下 i +1  j 0 **/
                if( !((i+4)>h) && check_word(h,w,tbl,i,1,j,0)==1)
                    return 0;
                /** 左 i 0  j -1 **/
                if( !((j-4)<0) && check_word(h,w,tbl,i,0,j,-1)==1)
                    return 0;
                /** 右 i 0  j +1 **/
                if( !((j+4)>w) && check_word(h,w,tbl,i,0,j,1)==1)
                    return 0;
                
                /** 左上 i -1  j -1 **/
                if( !((i-4)<0) && !((j-4)<0) && check_word(h,w,tbl,i,-1,j,-1)==1)
                    return 0;
                /** 右上 i -1  j 1 **/
                if( !((i-4)<0) && !((j+4)>w) && check_word(h,w,tbl,i,-1,j,1)==1)
                    return 0;
                /** 右下 i 1  j 1 **/
                if( !((i+4)>h) && !((j+4)>w) && check_word(h,w,tbl,i,1,j,1)==1)
                    return 0;
                /** 左下 i 1  j -1 **/
                if( !((i+4)>h) && !((j-4)<0) && check_word(h,w,tbl,i,1,j,-1)==1)
                    return 0;
            }
        }
    }
    return 0;
}