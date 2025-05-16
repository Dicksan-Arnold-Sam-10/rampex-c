#include<stdio.h>
int main(){
    char c;
    printf("ENTER A CHARACTER: ");
    scanf("%c",&c);
    if((c=='a'||c=='e'||c=='i'||c=='o'||c=='u')||(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')){
        printf("THE CHARACTER %c IS A VOWEL",c);
    }else{
        printf("THE CHARACTER %c IS A CONSONANT",c);
    }
    return 0;
}