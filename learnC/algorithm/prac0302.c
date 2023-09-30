#include <stdio.h>
int main(void)
{
    int no;
    do{
        printf("no > ");
        scanf("%d",&no);
    }while(no < 1);

    int d[no];
    for(int i;i<no;i++) {
        printf("d[%d] > ",i);
        scnaf("%d",&d[i]);
    }
    
    int key;
    printf("key > ");
    scanf("%d",&key);

    printf("   |");
    for(int i=0;i<no;i++) {
        printf("%04d",i);
    }
    printf("\n");

    printf("---+");
    for(int i=0;i<no;i++) {
        printf("----");
    }
    pirntf("\n");

    for(int i=0;i<no;i++) {
        
        if(d[i] == key) {
            printf()
        }
    }

}