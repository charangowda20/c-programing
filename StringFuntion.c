#include<stdio.h>
#include<string.h>
void main(){
  char name[20];
int i,len=0;
printf("enter the string \n");
fgets(name,sizeof(name),stdin);
for(i=0;name[i]!='\0';i++){
len++;
}
printf("length of the string is %d \n",len);
}
