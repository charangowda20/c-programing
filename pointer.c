#include<stdio.h>
#include<string.h>
void main(){
  int var=20;
int *ip;
ip=&var;
printf("address of variable %x \n",&var);
printf("address of stored in ip variable %x \n",ip);
printf("value of *ip variable %d \n",*ip);
}
