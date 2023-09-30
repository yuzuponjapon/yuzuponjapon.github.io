#include <stdio.h>
#include <limits.h>
void quicksort(int a[], int left, int right)
{
    int pivot;
    int i,j;
    if(left >= right) {
        return;
    }
    pivot = a[left];
    i = left;
    j = right;
    while(1) {
        while(a[i] > pivot) {
            i++;
        }
        while(a[j] < pivot) {
            j--;
        }
        if(i >= j) {
            break;
        }
        int tmp = a[i];
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
    int n,d;
    long p;
    int scan = scanf("%d%d%ld",&n,&d,&p);
    int f[n+d];
    for(int i=0;i<n;i++) {
        scan = scanf("%d",&f[i]);
    }
    for(int i=n;i<n+d;i++) {
        f[i] = 0;
    }
    quicksort(f,0,n-1);
    long long sum[n+d];
    sum[0] = 0;
    for(int i=0;i<n+d;i++) {
        sum[i+1] = sum[i] + f[i];
    }
    long long min = LLONG_MAX;
    int d_max = (n + d -1) / d;

    for(int i=0;i<=d_max;i++) {
        long long total=0;
        total += p * i;
        total += sum[n] - sum[i*d];
        if(total < min) {
            min = total;
        }
    }
    printf("%lld\n",min);
    return 0;
}