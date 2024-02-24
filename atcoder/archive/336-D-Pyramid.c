#include <stdio.h>
#include <stdlib.h>

typedef struct A_T{
    int id;
    int no;
} a_t;

int cmp(const void *a, const void *b)
{
    a_t *pa = (a_t*)a;
    a_t *pb = (a_t*)b;
    return pb->no - pa->no;
}
int p_check(int id, a_t *pa, int n)
{
    a_t *top = id + pa;
    if(top->no == 1) return 0;
    for(int i=1;i<top->no;i++) {

        if((top+i)->id >= n || (top-i)->id < 0) return -1;
        if((top+i)->no >= (top+i-1)->no - i && (top-i)->no >= (top-i+1)->no - i) {
            continue;
        }
        else {
            return -1;
        }
    }
    return 0;
}
int main(void)
{
    int n;
    a_t a[200000];
    a_t b[200000];

    int scan = scanf("%d",&n);
    if(n < 3) {
        printf("1\n");
        return 0;
    }
    for(int i=0;i<n;i++) {
        a[i].id = i;
        scan = scanf("%d",&a[i].no);    
        b[i] = a[i];
    }
    qsort(b,n,sizeof(a_t),cmp);

    for(int i=0;i<n;i++) {
        if(p_check(b[i].id,a,n) == 0) {
            printf("%d\n",b[i].no);
            break;
        }
    }
    printf("1\n");
    return 0;
}