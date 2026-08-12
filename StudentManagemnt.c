#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student students[100];
    int choice, count = 0, i, searchRoll;

    while (1) {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nEnter Roll Number: ");
                scanf("%d", &students[count].rollNo);

                printf("Enter Name: ");
                scanf(" %[^\n]", students[count].name);

                printf("Enter Age: ");
                scanf("%d", &students[count].age);

                printf("Enter Marks: ");
                scanf("%f", &students[count].marks);

                count++;

                printf("Student added successfully!\n");
                break;

            case 2:
                if (count == 0) {
                    printf("\nNo students available.\n");
                } else {
                    printf("\n===== Student Details =====\n");

                    for (i = 0; i < count; i++) {
                        printf("\nStudent %d\n", i + 1);
                        printf("Roll Number: %d\n", students[i].rollNo);
                        printf("Name: %s\n", students[i].name);
                        printf("Age: %d\n", students[i].age);
                        printf("Marks: %.2f\n", students[i].marks);
                    }
                }
                break;

            case 3:
                printf("\nEnter Roll Number to search: ");
                scanf("%d", &searchRoll);

                for (i = 0; i < count; i++) {
                    if (students[i].rollNo == searchRoll) {
                        printf("\nStudent Found!\n");
                        printf("Roll Number: %d\n", students[i].rollNo);
                        printf("Name: %s\n", students[i].name);
                        printf("Age: %d\n", students[i].age);
                        printf("Marks: %.2f\n", students[i].marks);
                        break;
                    }
                }

                if (i == count) {
                    printf("Student not found.\n");
                }
                break;

            case 4:
                printf("\nExiting program...\n");
                return 0;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}
