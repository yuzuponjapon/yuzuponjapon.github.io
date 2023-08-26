#include <stdio.h>
#include <stdlib.h>
int search(const int a[], int n, int key)
{
    int i = 0;
    while(1) {
        if(i == n)
            return -1;
        if(a[i] == key)
            return i;
        i++;
    }
}
int main(void)
{
    int n;
    int key;

    printf("no >");
    scanf("%d",&n);

    int *x = calloc(n,sizeof(int));
    for(int i=0;i<n;i++) {
        printf("x[%d] >",i);
        scanf("%d",&x[i]);
    }
    printf("search no >");
    scanf("%d",&key);

    int ans = search(x,n,key);
    if(ans == -1)
        puts("error");
    else
        printf("%d = x[%d]",key,ans);
    
    free(x);

    return 0;

}