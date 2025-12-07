# include <stdio.h>
# include <stdlib.h>

int main() {
    
    int correctPIN = 1234;
    int userPIN;

    int attempt =1;
    while (attempt <=3) { 
        printf("Please enter your PIN\n");
        scanf("%d" , &userPIN);


        if(userPIN == correctPIN){
                printf("Access Granted\n");

            }
         else {
             printf("Access Denied\n");
            }
        attempt++;
    }

    return 0;
}
