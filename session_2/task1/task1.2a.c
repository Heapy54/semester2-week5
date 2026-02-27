//Week 5, Session 2

# include <stdio.h>
# include <string.h>

int main(void){
/* Task 1.2a
 * Complete the following while loop in C to ask user input for a password 
 * until 'secure123' is entered.
 */
     char password[50];
	 
	 // compare using strcmp(str1,str2) from week 4
	 // complete the rest of the code here
    int loop = 1;
    while(loop == 1){
        scanf("%s",password);
        if(strcmp("secure123",password) == 0){
            printf("Correct Password\n");
            loop = 0;
        }
        else{
            printf("Password Incorrect\n");
        }
    }
	
    return 0;
}