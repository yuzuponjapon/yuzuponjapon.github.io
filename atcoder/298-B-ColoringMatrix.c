#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    bool ok;
    int N;
    int scan = scanf("%d",&N);

    int A[N][N], B[N][N], TMP[N][N];
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            scan = scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            scan = scanf("%d",&B[i][j]);
        }
    }
int *pa = A;
int *pb = B;
    /*** 一回目 ***/
    ok = true;
    int a;
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            if(*(pa+j*i+j)==1) { 
                if(*(pb+j*i+j)==0){
                    ok = false;
                    break;
                }
            }
        }
        if(!ok) break;
    }
    if(ok) {
        printf("Yes\n");
        return 0;
    }

    /*** 二回目 ***/
    ok = true;
    a = N-1;
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            if(A[i][j]==1) {
                if(B[a-j][i]==0) {
                    ok = false;
                    break;
                }
            }
        }
        if(!ok) break;
    }
    if(ok) {
        printf("Yes\n");
        return 0;
    }

    /*** 三回目 ***/
    ok = true;
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            if(A[i][j]==1) {
                if(B[a-i][a-j]==0) {
                    ok = false;
                    break;
                }
            }
        }
        if(!ok) break;
    }
    if(ok) {
        printf("Yes\n");
        return 0;
    }

    /*** 四回目 ***/
    ok = true;
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            if(A[i][j]==1) {
                if(B[j][a-i]==0) {
                    ok = false;
                    break;
                }
            }
        }
        if(!ok) break;
    }
    if(ok) {
        printf("Yes\n");
        return 0;
    }

    printf("No\n");

    return 0;
}