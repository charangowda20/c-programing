#include<stdio.h>
#include<conio.h>
void main(){
  int n,i,fact=0;
printf("enter n: \n);
  scanf("%d",&n);
for(i=0;i<=n;i++){
fact=fact*i;
}
printf("factorial of %d is %d",n,fact);
}
