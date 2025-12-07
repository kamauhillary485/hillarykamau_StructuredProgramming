#include <stdio.h>
#include <stdlib.h>

int main(){
    int choice;
    int correctPIN = 1234;
    int userPIN;

    printf("Please enter your PIN\n");
    scanf("%d" , &userPIN);

    if(userPIN == correctPIN){
        printf("Access Granted\n");
    } else {
        printf("Access Denied\n");
    }

    if(userPIN > 9999){
        printf("PIN cannot be more than 4 digits\n");
    }

    if(userPIN < 1000){
        
    }

    printf("Choose an option between 1 and 4: \n");
    scanf("%i", &choice);

    switch (choice)
    {
    case 1:
        printf("Door is already open");
        break;
    
    case 2:
        printf("Change username coming soon");
        break;
    case 3:
        printf("Change pin feature coming soon");
        break;
    case 4:
        printf("Exiting system");
        break;
    }
    return 0;
}