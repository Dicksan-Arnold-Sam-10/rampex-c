#include<stdio.h>
int main()
{
    int month;
    printf("ENTER A MONTH NUMBER(1-12): ");
    scanf("%d",&month);
    switch(month){
        
        case 1:
        printf("january month has 31 days");
        break;

        case 2:
        printf("febuary month has 28(non-leap year) or 29 days(leap-year)");
        break;

        case 3:
        printf("march month has 31 days");
        break;

        case 4:
        printf("april month has 30 days");
        break;

        case 5:
        printf("may month has 31 days");
        break;

        case 6:
        printf("june month has 30 days");
        break;

        case 7:
        printf("july month has 31 days");
        break;

        case 8:
        printf("augest month has 31 days");
        break;

        case 9:
        printf("september month has 30 days");
        break;

        case 10:
        printf("october month has 31 days");
        break;

        case 11:
        printf("november month has 30 days");
        break;

        case 12:
        printf("december month has 31 days");
        break;

        default:
        printf("INVALID MONTH NUMBER!");
        break;
    }
    return 0;
}