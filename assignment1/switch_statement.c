#include <stdio.h>
#include <stdlib.h>

int main(){
    int choice;

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