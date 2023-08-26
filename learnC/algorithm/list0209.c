#include <stdio.h>
int main(void)
{
    unsigned long cnt = 0;
    int prime[200];
    int pcnt = 0;
    prime[pcnt++] = 2;
    prime[pcnt++] = 3;

    for(int n=5;n <= 1000;n+=2) {
        int i;
        int flag = 0;
        for(i=1;cnt++,prime[i] * prime[i] <= n;i++) {
            cnt++;
            if(n % prime[i]  == 0){
                flag = 1;
                break;
            } 

        }

        if(!flag) {
            prime[pcnt++] = n;
        }
    }
    printf("prime_cnt(168) = %d\n",pcnt);
    printf("counter = %lu\n",cnt);
    return 0;
}