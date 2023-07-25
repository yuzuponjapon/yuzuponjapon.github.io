#include <stdio.h>
int f_check(int fi[],int fic,int fj[],int fjc)
{
    printf("f_check *****\n");
    printf("fic=%d fjc=%d\n",fic,fjc);
    for(int i=0;i<fic;i++) {
        printf("fi[%d]=%d\n",i,fi[i]);
    }
    for(int i=0;i<fjc;i++) {
        printf("fj[%d]=%d\n",i,fj[i]);
    }
    for(int i=0;i<fic;i++) {
        for(int j=0;j<fjc;j++) {
            printf("f_check  fi[%d]=%d fj[%d]=%d\n",i,fi[i],j,fj[j]);
            if(fi[i]==fj[j]) break;
            else {
                if(fi[i]<fj[j])
                    return 0;
                else
                    continue;
            }

        }
    }
    return 1;
}
int f2_check(int fi[],int fic,int fj[],int fjc)
{
    printf("f2_check *****\n");
    for(int i=0;i<fic;i++) {
        for(int j=0;j<fjc;j++) {
            printf("f2_check fi[%d]=%d fj[%d]=%d\n",fi[i],i,fj[j],j);
            if(fi[i]==fj[j]) break;
            else {
                if(fi[i]<fj[j])
                    return 1;
                else
                    continue;
            }

        }
    }
    return 0;

}


int main(void)
{
    int n,m;
    int scan = scanf("%d%d",&n,&m);

    int p[n],c[n];
    int f[n][m];
        printf("scan *****\n");
    for(int i=0;i<n;i++) {
        scan = scanf("%d%d",&p[i],&c[i]);
        printf("p=%d c=%d \n",p[i],c[i]);
        for(int j=0;j<c[i];j++) {
            scan = scanf("%d",&f[i][j]);
            printf("f[%d][%d]=%d\n",i,j,f[i][j]);
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i=j) continue;
            if(p[i] >= p[j]) {
                if(f_check(&f[i],c[i],&f[j],c[j])) {
                    if(p[i] > p[j] || f2_check(&f[i],c[i],&f[j],c[j])) {
                        printf("Yes\n");
                        return 0;
                    }
                }
            }
        }
    }
    printf("No\n");
    return 0;
}