#include<stdio.h>
int main(){
    float money;
    int choice;
    
    printf("ENTER THE AMOUNT OF MONEY HAVE IN RUPEES: ");
    scanf("%f",&money);
    
    printf("1]RUPEES TO DOLLAR\n2]RUPEES TO RUBLE\n3]RUPEES TO EURO\n4]RUPEES TO SAUDI RIYAL\n5]RUPEES TO JAPANESE YEN\n6]RUPEES TO SINGAPORE DOLLAR\n");
    printf("ENTER YOUR CHOICE(1-6): ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("%.2f RUPEES = %.2f DOLLAR\n",money,money*0.012);
        break;

        case 2:
        printf("%.2f RUPEES = %.2f RUBLE\n",money,money*0.94);
        break;

        case 3:
        printf("%.2f RUPEES = %.2f EURO\n",money,money*0.010);
        break;

        case 4:
        printf("%.2f RUPEES = %.2f SAUDI RIYAL\n",money,money*0.044);
        break;

        case 5:
        printf("%.2f RUPEES = %.2f JAPANESE YEN\n",money,money*1.71);
        break;

        case 6:
        printf("%.2f RUPEES = %.2f SINGAPORE DOLLAR\n",money,money*0.015);
        break;

        default:
        printf("INVALID CHOICE\n");
        break;
    }
    
    return 0;
}