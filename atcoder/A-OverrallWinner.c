#include <stdio.h>
int main(void)
{
    int n,m,i;
    int t=0;
    int a=0;
    int cnt=0;
    char s[101];

    scanf("%d",&n);
    m=n/2;
    scanf("%s",s);

    for(i=0;i<m;i++) {
        if(s[i]=='T')
            t++;
        else
            a++;
    }
printf("i=%d t=%d a=%d\n",i,t,a);
  	m++;
    do {
        if(s[i]=='T')
            t++;
        else
            a++;
printf("i=%d t=%d a=%d\n",i,t,a);
    i++;
    }while(t<m&&a<m);
    if(t>a)
        printf("T\n");
    else
        printf("A\n");
}