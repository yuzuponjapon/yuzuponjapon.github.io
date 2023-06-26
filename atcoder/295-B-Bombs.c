#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int R,C;
    int scan = scanf("%d%d",&R,&C);

    char B[R][C+1];
    for(int i=0;i<R;i++) 
        scan = scanf("%s",B[i]);
    
    for(int i=0;i<R;i++) {
        for(int j=0;j<C;j++) {
            if(B[i][j]=='.') continue;
            if(B[i][j]=='#') continue;
            int range = B[i][j]-48;
            for(int k=i-range;k<=i+range;k++) {
                if(k<0 || R<=k) continue;
                for(int l=j-range;l<=j+range;l++) {
                    if(l<0 || C<=l) continue;
                    if(abs(k-i)+abs(l-j)<=range) {
                        if(B[k][l] == '#')
                            B[k][l] = '.';
                    }

                }
            } 
            B[i][j] = '.';
        }
    }

    for(int i=0;i<R;i++)
        printf("%s\n",B[i]);
    
    return 0;
}