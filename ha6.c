#include <stdio.h>

int main() {
    int choice;

    do {
        printf(" Option A\n2. Option B. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {  


            printf("You picked A\n");


        }
        
        else if (choice == 2) {
            printf("You picked B\n");


        } else if (choice == 3)
        
        
        
        {
            printf("exit\n");


        } else {
            printf("Invalid choice\n");
        }

    } while (choice != 3);

    return 0;
}
