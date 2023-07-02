#include <stdio.h>

void swap(int x[],int l, int r)
{
    int tmp = x[l];
    x[l] = x[r];
    x[r] = tmp;
}

void qsort(int x[],int left,int right)
{
    int lp = left;
    int rp = right;
    int pivot = x[(left+right)/2];
    do {
        while(x[lp] < pivot) lp++;
        while(x[rp] > pivot) rp--;
        if(lp <= rp) {
            swap(x,lp,rp);
            lp++;
            rp--;
        }
        
    } while(lp <= rp);
  
    if(left < rp) qsort(x,left,rp);
    if(lp < right) qsort(x,lp,right);
}

int main(void)
{
    int n;
    scanf("%d",&n);

    int len = n*5;
    int x[len];
    for(int i=0;i<len;i++) {
        scanf("%d",&x[i]);
    }   
    qsort(x,0,len-1);

    for(int i=0;i<n;i++) {
        x[i] = 0;
        x[len-1-i] = 0;
    }
    float sum =0;
    for(int i=0;i<len;i++) {
        sum += x[i]; 
    }
    printf("%f\n",sum/(3*n));


    return 0;
}