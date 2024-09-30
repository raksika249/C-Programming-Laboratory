#include <stdio.h>

int main() {
  int p,n;
  float r,si;
  printf("enter principal amount:");
  scanf("%d",&p);
  printf("enter interest:");
  scanf("%f",&r);
  printf("enter years:");
  scanf("%d",&n);
  si=(float)p*n*r/100;
  printf("the simple interest is:%.2f",si);
    return 0;
}
