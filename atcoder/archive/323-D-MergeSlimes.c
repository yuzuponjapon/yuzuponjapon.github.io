#include <stdio.h>

typedef struct data1 {
    long long s;
    long long c;
}data2;

void quicksort(data2 a[], long left, long right)
{
    long long pivot;
    long i,j;

    if(left >= right) {
        return;
    }

    pivot = a[left].s;

    i = left;
    j = right;

    while(1) {
        while(a[i].s < pivot) {
            i++;
        }
        while(a[j].s > pivot) {
            j--;
        }
        if(i >= j) {
            break;
        }
        data2 tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;

        i++;
        j--;
    }

    quicksort(a, left, i - 1);  

    quicksort(a, j + 1, right);

}

int main(void)
{
    int n;
    int scan = scanf("%d",&n);
    long long counter = 0;

    data2 d[100000];
    for(int i=0;i<n;i++) {
        scan = scanf("%lld%lld",&d[i].s,&d[i].c);
    }    

    quicksort(d,0,n-1);

    for(int i=0;i<n;i++) {
        data2 tmp = {};
        while(d[i].c > 0) {
            counter += d[i].c % 2;
            tmp.s = d[i].s * 2;
            tmp.c = d[i].c / 2;
            for(int j=1+1;j<n;j++) {
                if(tmp.s < d[j].s) break;
                if(tmp.s == d[j].s) {
                    d[j].c += tmp.c;
                    d[i].c = 0;
                }
            }
            if(d[i].c > 0) {
                d[i] = tmp;
            }
        }
    }
    printf("%lld\n",counter);

    return 0;
}