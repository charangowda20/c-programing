#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    char department[50];
    float salary;
};

int main() {
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.empId);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.name);

    printf("Enter Department: ");
    scanf(" %[^\n]", emp.department);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    printf("\n===== Employee Information =====\n");
    printf("Employee ID: %d\n", emp.empId);
    printf("Name: %s\n", emp.name);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}
