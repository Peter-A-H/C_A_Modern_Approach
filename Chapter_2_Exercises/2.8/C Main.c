#include <stdio.h>

int main(void)
{
    printf("Enter amount of loan: ");
    float loan = 0.0f;
    (void)scanf("%f", &loan);

    printf("Enter interest rate: ");
    float rate = 0.0f;
    (void)scanf("%f", &rate);

    printf("Enter monthly payment: ");
    float payment = 0.0f;
    (void)scanf("%f", &payment);

    loan = loan - payment + (loan * rate / 100.0f / 12.0f);
    printf("Balance remaining after first payment: " "\x9C%.2f\n", loan);

    loan = loan - payment + (loan * rate / 100.0f / 12.0f);
    printf("Balance remaining after second payment: " "\x9C%.2f\n", loan);

    loan = loan - payment + (loan * rate / 100.0f / 12.0f);
    printf("Balance remaining after third payment: " "\x9C%.2f\n", loan);

    return 0;
}