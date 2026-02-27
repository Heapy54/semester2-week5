//Week 5, Session 2

# include <stdio.h>

int main(void){
/* Task 1.4
 * You have to decide which type of loop (for, while, do...while) to use.
 * Write a C program to display a menu and then ask the user to enter 
 * an option. If 0 is entered, the program terminates.
 * Menu options are:
 * 1 - Coffee
 * 2 - Tea
 * 3 - Cold drinks
 * 0 - to quit
 * When 1 is entered, print "You selected Coffee" and then redisplay the menu.
 * The same applies to other options except 0. When 0 is entered, the program terminates.
 */

    int choice;

    do
    {
        printf(" * Menu options are:\n* 1 - Coffee\n* 2 - Tea\n* 3 - Cold drinks\n* 0 - to quit\n");
        scanf(" %d",&choice);
        switch (choice)
        {
        case 0 :
            break;
        
        case 1 :
            printf("You selected Coffee\n");
            break;
        
        case 2 :
        printf("You selected Tea\n");
        break;

        case 3 :
            printf("You selected Cold drinks\n");
            break;
        
        default:
            printf("Enter valid choice\n");
            break;
        }
    } while (choice != 0);
    

    return 0;
}