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
        j++;
    }

    quicksort(a, left, i - 1);  

    quicksort(a, j + 1, right);

}