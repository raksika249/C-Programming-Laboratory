#include <stdio.h>

int main()
{
   int tam,eng,mat,sci,soc,tot,avg,grades;
   printf("enter tamil marks:");
   scanf("%d",&tam);
   printf("enter english marks:");
   scanf("%d",&eng);
   printf("enter science marks:");
   scanf("%d",&sci);
   printf("enter social marks:");
   scanf("%d",&soc);
   printf("enter maths marks:");
   scanf("%d",&mat);
   tot=tam+eng+mat+sci+soc;
   printf("\ntotal=%d",tot);
   avg=tot/5;
   printf("\naverage=%d",avg);
   if(tot>=451&&tot<=500)
   {
       printf("\nGrade 'A+'");
   }
   else if(tot>=401&&tot<=450)
   {
       printf("\nGrade 'A'");
   }
   else if(tot>=351&&tot<=400)
   {
       printf("\nGrade 'B+'");
   }
    else if(tot>=301&&tot<=350)
   {
       printf("\nGrade 'B'");
   }
    else if(tot>=251&&tot<=300)
   {
       printf("\nGrade 'C'");
   }
   else if(tot>=201&&tot<=250)
   {
       printf("\nGrade 'D'");
   }
   else if(tot>=175&&tot<=200)
   {
       printf("\nGrade 'E'");
   }
   else if(tot>=0&&tot<=174)
   {
       printf("\nyou are failed!!");
   }
   if(tam>=50&&eng>=50&&mat>=50&&sci>=50&&soc>=50)
   {
       printf("\nyou have cleared your exams");
   }
   else
   {
       printf("\nyou have failed your exams");
   }
    return 0;
}
