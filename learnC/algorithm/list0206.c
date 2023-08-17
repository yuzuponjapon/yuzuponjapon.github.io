#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int maxof(const int *a, int n)
{
    int max = *a;
    for(int i=1;i<n;i++) {
        if(*a>max) max = *a;
        a++;
    }
    return max;
}

int main(void)
{
    printf("no >");
    int num;
    scanf("%d",&num);
    int height[num];

    srand(time(NULL));
    for(int i=0;i<num;i++) {
        height[i] = 100 + rand() % 90;
        printf("height[%d] = %d\n",i,height[i]);
    }

    printf("max = %d\n",maxof(height,num));

    return 0;
    
}
