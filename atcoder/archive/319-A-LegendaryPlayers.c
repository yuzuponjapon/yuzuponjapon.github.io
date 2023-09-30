#include <stdio.h>
#include <string.h>
int main(void)
{
    typedef struct player {
        char name[15];
        int rating;
    } PLAYER;
    PLAYER d[] = {{"tourist",3858},
                    {"ksun48",3679},
                    {"Benq",3658},
                    {"Um_nik",3648},
                    {"apiad",3638},
                    {"Stonefeang",3630},
                    {"ecnerwala",3613},
                    {"mnbvmar",3555},
                    {"newbiedmy",3516},
                    {"semiexp",3481}};
    char s[16];
    int scan = scanf("%s",&s);
    for(int i=0;i<10;i++) {
        if(strcmp(d[i].name,s) == 0) {
            printf("%d\n",d[i].rating);
            break;
        }
    }
    return 0;
}