//calculate net sales where net sales = gross sales - 10% discount of gross sales

#include <stdio.h>

int main() {
    float net_sales, gross_sales, discount;
    printf("enter gross sales: ");
    scanf("%f", &gross_sales);

    discount = 0.1 * gross_sales;
    net_sales = gross_sales - discount;
    printf("net sales = %f", net_sales);
    return 0;
}