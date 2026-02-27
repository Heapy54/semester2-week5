// Week 5, Session 2

/* Task 2.2
 * Write a C program that continuosly prompts the user to enter
 * a message and then prints it back to them. The loop should terminate
 * if the user types "quit".
 * - use fgets() + newline removal
 * - use strcmp for string comparison
 */
 
 #include <stdio.h>
 #include <string.h>
 
 int main(void) {
	char buffer[50];
	int n = 50;
	int loop = 1;
	
	do
	{
		printf("Enter a sentence : ");
		//read input
		fgets(buffer, n , stdin);
		//strips \n at end
		buffer[strcspn(buffer, "\n")] = 0;
		if(strcmp(buffer, "quit") == 0){
			loop = 0;
		}
		else{
			printf("Repeated string : %s\n",buffer);
		}

	} while (loop == 1);
	
	 return 0;
 }