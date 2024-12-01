#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[35],c[55];
    scanf("%s%s",a,b);
    int len1=strlen(a);
    int len2=strlen(b);
    char small=a[0];
    int d=0,small_in;
    int i,j,k=0;
    while(a[d]!='\0'){
    small=a[0];
    for(i=0;i<len1;i++)
    {
        if(a[i]!='{'){
        if(a[i]<=small){
            small=a[i];
            a[i]='{';
            small_in=i;
        }
        }
    }
    c[k]=small;
    k++;
    for(int j=small_in;j<len2;j+=len1)
    {
      c[k]=b[j];
      k++;
    }
    d++;
    }
    printf("%s",c);
    return 0;
}
