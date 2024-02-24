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
    int a[9][9];
    for(int i=0;i<9;i++) {
        for(int j=0;j<9;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    int check_a[9];
    for(int i=0;i<9;i++) {
        for(int j=0;j<9;j++) {
            check_a[j] = a[i][j];
        }
        num_check(&check_a);
    }
}