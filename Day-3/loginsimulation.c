#include<stdio.h>
#include<string.h>
int main(){
    char username[25];
    char password[25];
    char usernamevar[25];
    char passwordvar[25];
    printf("\tACCOUNT SIGN UP\n");
    printf("-----------------------------\n");
    printf("USERNAME : ");
    scanf("%s",&username);
    printf("PASSWORD : ");
    scanf("%s",&password);
    
    printf("\n\n");

    printf("\tACCOUNT SIGN IN\n");
    printf("-----------------------------\n");
    printf("USERNAME : ");
    scanf("%s",&usernamevar);
    printf("PASSWORD : ");
    scanf("%s",&passwordvar);
    
    printf("\n\n");

    if(strcmp(username,usernamevar)==0 && strcmp(password,passwordvar)==0){
        printf("LOGIN SUCCESSFUL!");
    }else{
        printf("LOGIN UNSUCCESSFUL, INVALID USERNAME OR PASSWORD");
    }

    return 0;
}