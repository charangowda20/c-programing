#include<stdio.h>
void main(){
  int num,sum=0,rev=0,temp=0,digit;
printf("enter the number:\n");
scanf("%d",&num);
temp=num;
while(num>0){
digit=num%10;
sum=sum+digit;
rev=rev*10+digit;
num=num/10;
}
printf("sum of digit %d\n",sum);
printf("reverce of number %d \n",rev);
if(temp==rev)
  printf("the no is palindrame");
else
  printf("the no is not a palindrame");
}
