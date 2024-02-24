#include <stdio.h>

int main(void)
{
    printf("Enter item number: ");
    int itemNumber = 0;
    (void)scanf("%d", &itemNumber);

    printf("Enter unit price: ");
    float unitPrice = 0.0f;
    (void)scanf("%f", &unitPrice);

    printf("Enter purchase date (mm/dd/yyyy): ");
    int month = 0;
    int day = 0;
    int year = 0;
    (void)scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$  %.2f\t%d/%d/%d", itemNumber, unitPrice, month, day, year);

    return 0;
}