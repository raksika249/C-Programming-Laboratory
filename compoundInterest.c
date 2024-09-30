#include <stdio.h>
#include <math.h>
int main() {
  float p,n,t,amount,pow1;
  float r,ci;
  printf("enter principal amount:");
  scanf("%f",&p);
  printf("enter interest:");
  scanf("%f",&r);
  printf("enter years:");
  scanf("%f",&t);
  printf("enter the number of times in a year to be compounded:");
  scanf("%f",&n);
  pow1=pow((1+r/(n*100)),n*t);
  amount=p*pow1;
  ci=amount-p;
  printf("Compound Interest:%f",ci);
    return 0;
}
