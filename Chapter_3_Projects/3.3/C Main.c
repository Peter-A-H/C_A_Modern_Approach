#include <stdio.h>

int main(void)
{
    printf("Enter ISBN: ");
    int gs1Prefix = 0;
    int groupIdentifier = 0;
    int publisherCode = 0;
    int itemNumber = 0;
    int checkDigit = 0;
    (void)scanf("%d-%d-%d-%d-%d", &gs1Prefix, &groupIdentifier, &publisherCode, &itemNumber, &checkDigit);

    printf("GS1 Prefix: %d\n", gs1Prefix);
    printf("Group identifier: %d\n", groupIdentifier);
    printf("Publisher code: %d\n", publisherCode);
    printf("Item number: %d\n", itemNumber);
    printf("Check digit: %d\n", checkDigit);

    return 0;
}