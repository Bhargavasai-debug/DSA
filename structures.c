#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    int age;
    float salary;
    char department[50];
};

int main() {
    struct Employee emp[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Enter Age: ");
        scanf("%d", &emp[i].age);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);

        printf("Enter Department: ");
        scanf(" %[^\n]", emp[i].department);
    }

    // Display employee database
    printf("\n----- Employee Database -----\n");

    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID         : %d\n", emp[i].id);
        printf("Name       : %s\n", emp[i].name);
        printf("Age        : %d\n", emp[i].age);
        printf("Salary     : %.2f\n", emp[i].salary);
        printf("Department : %s\n", emp[i].department);
    }

    return 0;
}