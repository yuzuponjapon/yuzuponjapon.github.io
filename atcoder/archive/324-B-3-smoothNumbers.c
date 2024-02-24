#include <stdio.h>
int main(void)
{
    long n;
    int scan = scanf("%ld",&n);

    long tbl2[65];
    long tbl3[65];

    tbl2[0] = 1;
    int cnt2 = 1;
    long ttl = 1;
    do {
        ttl *= 2;
        tbl2[cnt2++] = ttl;
    } while( ttl < n); 
    tbl3[0] = 1;
    int cnt3 = 1;
    ttl = 1;
    do {
        ttl *= 3;
        tbl3[cnt3++] = ttl;
    } while( ttl < n); 

    for(int i=0;i<cnt2;i++) {
        for(int j=0;j<cnt3;j++) {
            if(tbl2[i]*tbl3[j] == n) {
                printf("Yes\n");
                return 0;
            }
        }
    }
    printf("No\n");
    return 0;


}