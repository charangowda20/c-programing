#include <stdio.h>
struct employee {
    char name[20];
    int emp_id;
    float salary;
    
};
void main(){
    struct employee e1;
    printf("enter employee details\n");
    scanf("%s ",e1.name);
    scanf("%d ",&e1.emp_id);
    scanf("%f ",&e1.salary);
  printf("employee details are \n");
   printf("%s \n",e1.name);
    printf("%d \n",e1.emp_id);
    printf("%f \n",e1.salary);
   
    
}
