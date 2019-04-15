/*ENNG1003 Project 1 - English Text Ciphers 

			USER INTERFACE NOTES
How to choose between encryption and decryption  -

*/


int rotCipherEnc (int x);		//Function prototype
								//

#include <stdio.h>

int main() {
	int max = 26, index = 0;
	int alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O'}; 
	for(index = 0; index < max; index++){
	    int temp = alpha[index]-65;
	    printf("%d\n", temp);
	}
	return 0;
}

								/*eg. BEFORE EVERY FUNCTION DEFINITION - 
								Function block comment to document how the function works. 
								Also it's inputs, return value and limitations*/
	
	/* ROTATION CIPHER ENCRIPTION FUNCTION - 
	HOW IT WORKS:
	INPUT: Letter of the Alphabet 
	RETURN VALUE: Third letter of the Alphabet after the input letter.
	LIMITATIONS:
	*/
	int rotCipherEnc (int x);	//Rotation cipher encription definition
	