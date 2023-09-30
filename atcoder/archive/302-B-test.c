#include <stdio.h>
int test_func(char *test[]) 
{
    printf("%s\n",*test);
    printf("%s\n",*(test+1));
    printf("%s\n",*(test+2));
    return 0;
}

int main(void)
{
    char *name[] = {"tatsu","katsu","sanae"};
    test_func(name);
    for(int i=0;i<3;i++) {
        printf("%s\n",name);
    }

    return 0;
}