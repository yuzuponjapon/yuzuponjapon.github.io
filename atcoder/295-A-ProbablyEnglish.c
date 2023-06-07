#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    char w[100][51];
    int i;
    int flag = 0;

    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%s",&w[i]);
    } 


    for(i=0;i<n;i++) {
        if(strcmp(&w[i],"and")==0) {
            flag = 1;
            break;
        }
        if(strcmp(&w[i],"not")==0) {
            flag = 1;
            break;
        }
        if(strcmp(&w[i],"that")==0) {
            flag = 1;
            break;
        }
        if(strcmp(&w[i],"the")==0) {
            flag = 1;
            break;
        }
        if(strcmp(&w[i],"you")==0) {
            flag = 1;
            break;
        }
    }

    if(flag==1) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}