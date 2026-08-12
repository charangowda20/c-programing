#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student students[5];
    int i, highest = 0;

    // Input details of 5 students
    for (i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNo);

        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Enter Age: ");
        scanf("%d", &students[i].age);

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Find student with highest marks
    for (i = 1; i < 5; i++) {
        if (students[i].marks > students[highest].marks) {
            highest = i;
        }
    }

    // Display student with highest marks
    printf("\n===== Student with Highest Marks =====\n");
    printf("Roll Number: %d\n", students[highest].rollNo);
    printf("Name: %s\n", students[highest].name);
    printf("Age: %d\n", students[highest].age);
    printf("Marks: %.2f\n", students[highest].marks);

    return 0;
}
