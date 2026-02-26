// Week 5, Session 2

/* Advanced task 1
 * Convert the following Python list comprehension to for loop in C. 
 * 
 * Python code:
 * matrix = [[1, 2], [3, 4], [5, 6]]
 * # Flatten the 2D list into 1D
 * flattened = [item for row in matrix for item in row]
 * for i in flattened:
 *    print(i)
 */
 
 # include <stdio.h>

int main(void){
	int matrix[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int flattened[6];
	int index = 0;
	
	// complete the rest of the code here
	//loop through the first set in matrix
	for(int i = 0; i < 3; i++){
		//loop through secind set in matrix
		for(int k = 0; k < 2; k++){
			//assign the flattened variable
			flattened[index] = matrix[i][k];
			//incrament the index position
			index +=1;
		}
	}
	
	//print the values
	for(int i = 0; i < 6; i++){
		printf("%d\n",flattened[i]);
	}
	return 0;
}