//calculate net salary where net_salary = gross_salary + allowances - deduction
// allowances are 10% while deduction are 3% of the gross salary

# include <stdio.h>

int main() {
    float net_salary, gross_salary, allowance, deduction;
    
    printf("enter the gross salary: ");
    scanf("%f", &gross_salary);

    allowance = 0.1 * gross_salary;
    deduction = 0.03 * gross_salary;

    net_salary = gross_salary + allowance - deduction;
    printf("net salary = %f", net_salary);
    return 0;
}