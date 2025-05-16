#include<stdio.h>
int main()
{
    int principal, numofyears, rateofinterest;
    printf("ENTER THE PRINCIPAL AMOUNT: ");
    scanf("%d",&principal);
    printf("ENTER THE RATE OF INTEREST: ");
    scanf("%d",&rateofinterest);
    printf("ENTER THE NUMBER OF YEARS: ");
    scanf("%d",&numofyears);

    float si = (principal * numofyears * rateofinterest) / 100;
    printf("PRINCIPAL AMOUNT - %d\n",principal);
    printf("RATE OF INTEREST - %d\n",rateofinterest);
    printf("NUMBER OF YEARS - %d\n",numofyears);
    printf("THE SIMPLE INTEREST IS %.2f\n",si);
    return 0;
}