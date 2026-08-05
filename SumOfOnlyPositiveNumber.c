#include<stdio.h>
void main(){
  int n,sum=0,count=0;
for(;;){
printf("enter a no:\n");
scanf("%d",&n");
if(n<0){
break;
}
sum=sum+n;
count++;
printf("sum=%d \n",sum);
printf("total sum =%d",sum);
}
