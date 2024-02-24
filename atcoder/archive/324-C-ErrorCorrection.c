#include <stdio.h>
#include <string.h>
int main(void)
{
    int n;
    char tdash[500001];
    char tmp[500001];
    int tdash_len;
    int scan = scanf("%s",tdash);
    tdash_len = strlen(tdash);

    for(int i=0;i<n;i++) {
        scan = scanf("%s",tmp);
        int tmp_len = strlen(tmp);

        if(tdash_len == tmp_len) {
            int errflag = 0;
            for(int j=0;j<tmp_len;j++) {
                if(tdash[j] == tmp[j]) {
                    continue;
                }
                else {
                    if(errflag == 0) {
                        errflag = 1;
                    }
                    else {
                        if(errflag == 1) {
                            errflag = 2;
                            break;
                        }
                    }
                }

            }
            if(errflag != 2) {
                printf("%d ",i+1);
            }
            else {
                printf("0\n");
            }
        }
        else{
            if(tmp_len -1 == tdash_len) {
                int errflag2 = 0;
                for(int j=0,k=0;j<tmp_len;j++,k++) {
                    if(tdash[j] == tmp[k]) {
                        continue;
                    }
                    else {
                        if(errflag2 == 0) {
                            errflag2 = 1;
                            j++;
                        }
                        else {
                            if(errflag2 == 1) {
                                errflag2 = 2;
                                break;
                            }
                        }
                    }
                }
                if(errflag2 != 2) {
                    printf("%d ",i+1);
                }
                else {
                    printf("0\n");
                }
            }
        }
    }
    return 0;


}