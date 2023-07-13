#include <stdio.h>
#include <stdlib.h>

#define swap(type,x,y) do{type t = x; x = y; y = t;}while(0)

void bubble(int x[], int n)
{
    for(int i = 0;i<n;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(x[j]>x[j-1])
                swap(int,x[j],x[j-1]);
        }
    }

}

int main(void)
{
    int s[] = {5,7,3,4,9,8,1,6,2};
    int n = sizeof(s) / sizeof(int);
    for(int i = 0;i<n;i++) {
        printf("%d ",s[i]);
    }
    printf("\n");
    bubble(s,n);
    for(int i = 0;i<n;i++) {
        printf("%d ",s[i]);
    }
    printf("\n");
    return 0;
}