#include <stdio.h>

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
        while(a[i] < pivot) {
            i++;
        }
        while(a[j] > pivot) {
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
    int n,x;
    int scan = scanf("%d%d",&n,&x);

    int a[n];
    int s[n];
    for(int i=0;i<n-1;i++) {
        scan = scanf("%d",&a[i]);
    }
    for(int i=0;i<=100;i++) {
        for(int j=0;j<n-1;j++) {
            s[j] = a[j];
        }
        s[n-1] = i;
        quicksort(s,0,n-1);

        int sum = 0;

        for(int k=1;k<n-1;k++) {
            sum += s[k];
        }
        if(sum == x) {
            printf("%d\n",i);
            return 0;
        }
    }
    printf("-1\n");

    return 0;
}