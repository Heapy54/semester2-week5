// Week 5, Session 2

/* Task 3.1
 * Number Guessing Game
 * A program where the computer selects a random number and the person tries to guess it
 */

#include <stdio.h>
#include <stdlib.h>  // For rand(), srand(), atoi()
#include <time.h>    // For time()
#include <string.h>  // For strcspn()

int main(void) {
    char input[20];      // Buffer for input
    int guess;           // The person's guess
    int target;          // The random number to guess
    int num_guesses;     // Counter for number of guesses
    int min = 1;         // Minimum value for random number
    int max = 100;       // Maximum value for random number
    int playing = 1;     // Flag to control the main game loop
    int correct = 1;    //Flag to keep game going until corrrect
    
    // Seed the random number generator
    srand(time(NULL));
    
    printf("=== Number Guessing Game ===\n");
    printf("I'm thinking of a number between %d and %d\n", min, max);
    
    
    
    // TODO: Implement the main game loop
    // This should continue until the person decides to quit
    while(playing == 1){
        // TODO: Generate a random number between min and max
        // Hint: target = min + rand() % (max - min + 1);
        target = min + rand() % (max-min + 1);
        // Reset number of guesses for a new game
        num_guesses = 0;
        
        // TODO: Implement the guessing loop
        // This should continue until the correct number is guessed
        while(correct == 1){
            printf("Enter your guess: ");
            
            // TODO: Read and process the input
            // Use fgets() to read input
            int n = 5;
            fgets(input, n , stdin);
            // Use atoi() to convert to integer
            guess = atoi(input);
            
            num_guesses++;
            
            // TODO: Check if the guess is correct, too high, or too low
            // Provide appropriate in-game feedback
            if(guess == target){
                printf("CORRECT - the number was %d\n",target);
                correct = 0;
            }
            else if (guess > target)
            {
                printf("The guess %d is too high\n", guess);
            }
            else{
                printf("The guess %d is too low\n",guess);
            }
            
            
            // TODO: Offer a hint after several failed attempts
            
        }
        // TODO: Ask if the person wants to play again
        // Update the 'playing' flag based on the answer
        char response;
        printf("Play again? (enter 'y' or 'n'): ");
        scanf(" %c",&response);
        if(response == 'y'){
            correct = 1;
        }
        else{
            printf("\nThanks for playing!\n");
            playing = 0;
        }
    
    

    }
    return 0;
}
