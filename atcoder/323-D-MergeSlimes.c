#include <stdio.h>

typedef struct data1 {
    int s;
    long c;
}data2;

void quicksort(data2 a[], int left, int right)
{
    int pivot;
    int i,j;

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

    data2 d[100000];
    for(int i=0;i<n;i++) {
        scanf("%d%ld",&d[i].s,&d[i].c);
    }    

    quicksort(d,0,n-1);


}