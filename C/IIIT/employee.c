#include <stdio.h>
struct Employee {
    char name[100];
    float basic_pay;
    float gross_salary;
};
void main() {
    struct Employee emp[1];
    int n = 1;
    for (int i = 0; i < n; i++) {
        printf("Enter the name of employee %d: ", i + 1);
        scanf("%s", emp[i].name);
        printf("Enter the basic pay of employee %d: ", i + 1);
        scanf("%f", &emp[i].basic_pay);
        emp[i].gross_salary = emp[i].basic_pay + 0.52 * emp[i].basic_pay;
    }
    printf("\nEmployee details:\n");
    for (int i = 0; i < n; i++) 
        printf("Name: %s\nGross Salary: %.2f\n", emp[i].name, emp[i].gross_salary);
}