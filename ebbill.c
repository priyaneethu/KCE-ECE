#include<stdio.h>

int main()
{
   int unit;
   int amount;

   scanf("%d",&unit);
   if( unit <= 100)
       amount = unit *10;
   else if( unit <=200)
      amount = 1000+(unit-100)*15;
   else if( unit <=300)
      amount = 2500+(unit-200)*20;
   else
      amount = 4500+(unit-300)*25;
   printf("%d",amount);

  amount =unit <=100 ? unit*10 :
      unit <=200?1000+(unit-100)*15 :
      unit <=300?2500+(unit-200)*20:
      4500+ (unit-300)*25;



}
