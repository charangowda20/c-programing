#include <stdio.h>
struct Project{
    char name[10];
    int proj_id;
    float proj_cost;
    
};
struct employee {
    char name[20];
    int emp_id;
    float salary;
    struct Project p;
    
};
void main(){
    struct employee e1;
    printf("enter employee details\n");
    scanf("%s ",e1.name);
    scanf("%d ",&e1.emp_id);
    scanf("%f ",&e1.salary);
  printf("employee details are\n");
   printf("%s \n",e1.name);
    printf("%d \n",e1.emp_id);
    printf("%f \n",e1.salary);
    printf("enter project details \n");
    scanf("%s ",e1.p.name);
    scanf("%d ",&e1.p.proj_id);
    scanf("%f ",&e1.p.proj_cost);
  printf("project details are\n");
     printf("%s \n",e1.p.name);
    printf("%d \n ",e1.p.proj_id);
    printf("%f \n",e1.p.proj_cost);
    
}
