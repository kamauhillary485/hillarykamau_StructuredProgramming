#include <stdio.h>
#include <stdlib.h>

int main(){

    // defining variable
    int correctPIN = 1234;
    int userPIN;

    // capture input of the user
    printf("Please enter your PIN\n");
    scanf("%d" , &userPIN);

    // if-else statement to check if the PIN is correct
    if(userPIN == correctPIN){
        printf("Access Granted\n");
    } else {
        printf("Access Denied\n");
    }
    // if statement is more than 4 digits
    if(userPIN > 9999){
        printf("PIN cannot be more than 4 digits\n");
    }
    //if statement is less than 4 digits
    if(userPIN < 1000){
        
    }
    


}