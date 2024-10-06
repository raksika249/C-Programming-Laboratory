#include <stdio.h>

int main()
{
   int basicPay,bonus,allow,netSalary;
   printf("enter your basic pay:");
   scanf("%d",&basicPay);
   if(basicPay>0&&basicPay<=10000)
   {
       bonus=basicPay*2/100;
       allow=basicPay*1/100;
       printf("\nbonus:%d",bonus);
       printf("\ntravel allowance:%d",allow);
       netSalary=basicPay+bonus+allow;
       printf("\nnet salary:%d",netSalary);
   }
    else if(basicPay>=10001&&basicPay<=25000)
   {
       bonus=basicPay*5/100;
       allow=basicPay*2/100;
       printf("\nbonus:%d",bonus);
       printf("\ntravel allowance:%d",allow);
       netSalary=basicPay+bonus+allow;
       printf("\nnet salary:%d",netSalary);
   }
  else if(basicPay>=25001&&basicPay<=50000)
   {
       bonus=basicPay*10/100;
       allow=basicPay*3/100;
       printf("\nbonus:%d",bonus);
       printf("\ntravel allowance:%d",allow);
       netSalary=basicPay+bonus+allow;
       printf("\nnet salary:%d",netSalary);
   }
   else if(basicPay>=50001&&basicPay<=100000)
   {
       bonus=basicPay*10/100;
       allow=basicPay*3/100;
       printf("\nbonus:%d",bonus);
       printf("\ntravel allowance:%d",allow);
       netSalary=basicPay+bonus+allow;
       printf("\nnet salary:%d",netSalary);
   }
     else if(basicPay>100000)
   {
       bonus=basicPay*20/100;
       allow=basicPay*3/100;
       printf("\nbonus:%d",bonus);
       printf("\ntravel allowance:%d",allow);
       netSalary=basicPay+bonus+allow;
       printf("\nnet salary:%d",netSalary);
   }
    return 0;
}
