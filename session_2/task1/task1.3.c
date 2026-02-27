//Week 5, Session 2

# include <stdio.h>

int main(void){
/* Task 1.3
 * You have to decide which type of loop (for, while, do...while) to use.
 * Write a C program to read a series of integers from the user and sum them
 * until a 0 (zero) is entered. Print the sum at the end.
 */
    int loop = 1;
    int number = 0;
    int total = 0;

    do
    {
        //Takes the input from the user
        scanf(" %d",&number);
        //if its 0 then end the loop and print the sum
        if(number == 0){
            printf("The total sum is %d\n",total);
            loop = 0;
        }
        //otherwise add the number to the sum and keep looping
        else{
            total += number;
        }
    } while (loop == 1);
    


    return 0;
}