#include<stdio.h>
int main(){
    float tempCelcius;
    printf("ENTER THE TEMPERATURE IN CELCIUS : ");
    scanf("%f",&tempCelcius);
    if(tempCelcius<10){
        printf("WEAR JACKET");
    }else if(tempCelcius>=10 && tempCelcius<=20){
        printf("WEAR SWEATER");
    }else{
        printf("WEAR T-SHIRT");
    }
    return 0;
}