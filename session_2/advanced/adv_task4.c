// Week 5, Session 2

/* Advanced task 4
 * Simulate an image processing filter. Given a 2D grid of pixel values,
 * use two for loops to increase the brightness of every pixel by 20, 
 * but use only pointers to access and modify the data. If the new values
 * exceeds 255, it must be set to exactly 255.
 */
 
#include <stdio.h>

int main(void){
	int image[3][4] = {
        {110, 120, 130, 140},
        {150, 160, 170, 180},
        {190, 200, 230, 250}
    };
	
	int boost = 20; // The brightness increase
	int max_val = 255;
	
	// complete the rest of the code here
	// use pointer to modify the values
	int (*row_ptr)[4] = image; 

	for(int i = 0; i < 3; i++){
		for(int j = 0; j <4 ; j++){
			//pointer to each pixel
			int *pixel_ptr = *(row_ptr + i)+j;

			//increase the brightness
			*pixel_ptr +=boost;

			//clamp the value to 255
			if(*pixel_ptr > max_val){
				*pixel_ptr = max_val;
			}
		}
	}

	//print the results
	for(int i = 0; i < 3; i++){
		for(int j = 0; j <4 ; j++){
			printf("%d ",image[i][j]);
		}
		printf("\n");
	}

	
	return 0;

}
