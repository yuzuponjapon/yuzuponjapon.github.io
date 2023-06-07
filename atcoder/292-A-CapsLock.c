#include <stdio.h>
#include <string.h>

int main(void) {

    char s[101];
    int diff;
    int i;

    diff = 'A' - 'a';

    scanf("%s",s);

    for(i=0;i<strlen(s);i++) {
        s[i] += diff;
    }

    printf("%s\n",s);

    return 0;

}