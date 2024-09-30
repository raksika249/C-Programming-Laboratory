#include <stdio.h>

int main() {
  float tf;
  float tc;
  printf("temperature in farenheit:");
  scanf("%f",&tf);
  tc=(tf-32)*(5.0/9.0);
  printf("temperature in celsius:%f",tc);
    return 0;
}
