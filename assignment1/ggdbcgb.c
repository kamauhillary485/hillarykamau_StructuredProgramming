#include <stdio.h>
#include <stdlib.h>

int main(){
    //defining variable
    int correctPIN =1234;
    int userPIN;

    //capture input of the user
    printf("Please input your PIN\n");
    scanf("%d", &userPIN);

    //if statement
    if (userPIN == correctPIN) {
        printf("Accesss Granted!"); 
    }
}


    
    
    


