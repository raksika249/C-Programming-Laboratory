#include <stdio.h>

int main() {
   int a=7,b=5,c;
   c=a;
   a=b;
   b=c;
   printf("a=%d\nb=%d",a,b);
  return 0;
}
