#include <stdio.h>

// Define structure for student
struct Student {
    int rollNo;
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s;

    // Input student details
    printf("Enter student roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter student name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter student age: ");
    scanf("%d", &s.age);

    printf("Enter student marks: ");
    scanf("%f", &s.marks);

    // Print student details
    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
