#include <stdio.h>
int main(void)
{
    int no;
    do { 
        printf("no >");
        scanf("%d",&no);
    } while(no < 0);


    int cn;
    do {
        printf("cn >");
        scanf("%d",&cn);
    } while(cn < 2 || 36 < cn);
    
    char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char ans[100];
    int i = 0;
    do {
        ans[i] = dchar[no % cn];
        no /= cn;
        i++;
    } while(no > 0);
    ans[i] = '\0';

    for(int j=0;j<i/2;j++) {
        char tmp = ans[j];
        ans[j] = ans[i-1-j];
        ans[i-1-j] = tmp;
    }
    printf("%s",ans);

    return 0;

}