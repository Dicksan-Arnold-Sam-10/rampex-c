#include<stdio.h>
int main()
{
    int dayno;
    printf("ENTER THE DAY NUMBER(1-7) : ");
    scanf("%d",&dayno);
    switch(dayno){

        case 1:
        printf("MONDAY");
        break;

        case 2:
        printf("TUESDAY"); 
        break;

        case 3:
        printf("WEDNESDAY");
        break;

        case 4:
        printf("THURSDAY");
        break;

        case 5:
        printf("FRIDAY");
        break;

        case 6:
        printf("SATURDAY");
        break;

        case 7:
        printf("SUNDAY");
        break;

        default:
        printf("INVALID DAY NUMBER");
        break;

    }
    return 0;
}