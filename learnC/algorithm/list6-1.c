#include <stdio.h>
#include <stdlib.H>

#define swap(type,x,y) do{type t = x; x = y; y = t;} while(0)
void bubble(int a[], int n) 
{
    for(int i = 0; i< n -1;i++) {
        for(int j=n-1; j>i;j--) {
            if(a[j-1] > a[j])
                swap(int,a[j-1],a[j]);
        }
    }
}
int main(void) 
{
    int x[9] = {3,9,6,7,8,4,2,1,5};
    int n = sizeof(x) / sizeof(int);

/****************/
for(int i = 0;i < n;i++) {
    printf("%d ",x[i]);
}
printf("\n");
/****************/

    bubble(x,9);
/****************/
for(int i = 0;i < n;i++) {
    printf("%d ",x[i]);
}
printf("\n");
/********************/
    return 0;
}