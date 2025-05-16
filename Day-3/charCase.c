#include<stdio.h>
int main(){
    char c;
    printf("ENTER A CHARACTER: ");
    scanf("%c",&c);
    int num =(int) c;
    if(num>=65 && num<=90){
        printf("the character %c is in UPPERCASE",c);
    }else if(num>=97 && num<=122){
        printf("the character %c is in lowercase",c);
    }else{
        printf("THE CHARACTER %c IS NOT IN ENGLISH ALPHABET",c);
    }
    return 0;
}