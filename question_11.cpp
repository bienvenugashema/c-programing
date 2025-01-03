#include <stdio.h>
#include <string.h>

// Define the Employee structure
struct Employee {
    char names[50];         // Array to store the name
    long long int id;      // Use long long int for large ID
    double salary;          // Salary (double)
};

// Function to input employee details
void data(struct Employee *emp) {
    printf("Enter name: ");
    fgets(emp->names, sizeof(emp->names), stdin);

 

    printf("Enter ID: ");
    scanf("%lld", &emp->id);  // Use %lld for long long int
    
    printf("Enter salary: ");
    scanf("%lf", &emp->salary);
    
    // Consume the leftover newline character after the last scanf
    getchar();
}

// Function to print employee details
void printEmployee(struct Employee emp) {
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.names);
    printf("ID: %lld\n", emp.id);  // Use %lld to print long long int
    printf("Salary: %.2lf\n", emp.salary);
}

int main() {
    struct Employee emp1;

    // Input data for emp1
    data(&emp1);

    // Output data for emp1
    printEmployee(emp1);

    return 0;
}
