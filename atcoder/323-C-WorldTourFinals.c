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
    int n,m;
    int scan = scanf("%d%d",&n,&m);

    int a[100] = {};
    for(int i=0;i<m;i++) {
        scan = scanf("%d",&a[i]);
    }

    int max = 0;
    char tmp_s[101];
    int s[100][100];
    int score[100];
    for(int i=0;i<n;i++) {
        scan = scanf("%s",tmp_s);
        for(int j=0;j<m;j++) {
            if(tmp_s[j] == 'o') {
                score[i] += a[j];
                s[i][j] = 0;
            }
            else {
                s[i][j] = a[j];
            }
        }
        score[i] += i;
        if(max < score[i]) {
            max = score[i];
        }
    }


    for(int i=0;i<n;i++) {
        int cnt = 0;
        quicksort(&s[i],0,m-1);
        while(max > score[i]) {
            score[i] += s[i][cnt++];
        }
        printf("%d\n",cnt);
    }

    return 0;
}