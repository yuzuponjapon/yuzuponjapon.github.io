#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char s[101];
    int yes_flag = 0;
    int no_flag = 0;

    (void)scanf("%d",&n);
    (void)scanf("%s",s);

    int i;
    for(i=0;i<n;i++) {
        if(s[i]=='o') {
            yes_flag = 1;
        }
      	else {
            if(s[i]=='x') {
          	    no_flag = 1;
            }
        }
    }

    if(no_flag == 0 && yes_flag == 1) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
/**
printf("%X\n",'o');
printf("%X\n",'o');
    if(strstr(s,"o") != NULL && strstr(s,"x") == NULL) {
        printf("yes\n");
    }
    else {
        printf("no\n");
    }
**/
    
    return 0;

}