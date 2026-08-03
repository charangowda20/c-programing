#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
  float pi=3.14;
float area,circumference,radius;
clrscr();
printf("enter the radius \n");
scanf("%f",&radius);
area =pi*radius*radius;
circumference=2*pi*radius;
printf("the area of circle is %f",area);
printf("the area of circumference is %f",circumference");
}
