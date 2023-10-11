#include<stdio.h>
void main()
{
  float radius;
  float area;
  printf("Enter radius: ");
  scanf("%f",&radius);
  area=3.14 *radius * radius ;
  printf("%.2f",area);
}
