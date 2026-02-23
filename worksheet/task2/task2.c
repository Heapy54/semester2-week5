/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:Daniel Heap
 * ID: 201968718
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	int value;
	
	printf("Enter a hexadecimal: ");

	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	scanf("%8s",hex);


	//Loop through every value in the sting until reaches the end value
	for(int i = 0; hex[i] != '\0'; i++){
		//set the current character
		char character = hex[i];

		//If the chracter is betwen 0 and 9 then subtract value for '0' form to give integer
		if(character >= '0' && character <= '9'){
			value = character - '0';
		}
		//If the character is between a and f it subtracts the integer value for character a
		//Then it adds 10 so that its the correct value 
		else if(character >= 'A' && character <= 'F'){
			value = character - 'A' + 10;
		}
		//Does the same as the previous but with lower case
		else if(character >= 'a' && character <= 'f'){
			value = character - 'a' + 10;
		}
		//If a value entered which is not in the scope for hex
		else{
			printf("Error: Invalid Hexadecimal\n");
			return 0;
		}

		//Adds the value of this loop together
		decimal = decimal *16 + value;
	}
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}