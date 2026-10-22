#include <stdio.h>
//creation of database using structures
struct Employee {
    int id;
    char name[50];
    float salary;
    char department[30];
};

int main() {
    struct Employee emp[100];
    int n, i, searchId, found = 0;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Name: ");
        scanf(" %49[^\n]", emp[i].name);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);

        printf("Enter Department: ");
        scanf(" %29[^\n]", emp[i].department);
    }

    // Display employee database
    printf("\n--- Employee Database ---\n");
    printf("ID\tName\t\tSalary\t\tDepartment\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%-15s\t%.2f\t\t%s\n",
               emp[i].id,
               emp[i].name,
               emp[i].salary,
               emp[i].department);
    }

    // Search employee by ID
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &searchId);

    for (i = 0; i < n; i++) {
        if (emp[i].id == searchId) {
            printf("\nEmployee Found!\n");
            printf("ID: %d\n", emp[i].id);
            printf("Name: %s\n", emp[i].name);
            printf("Salary: %.2f\n", emp[i].salary);
            printf("Department: %s\n", emp[i].department);

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Employee not found!\n");
    }

    return 0;
}
