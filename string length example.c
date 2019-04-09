/*STRING LENGTH FUNCTION FROM FRIDAY LECTURE WEEK 6*/

#include<stdio.h>

int stringLength(char *str);				//stringLength 'function prototype'
											
int main(){
	char str[] = "test string";				//This is an array called str, which is composed of a string of letters "test string"
											//Each of the letters is of 'char' data type and require 1 byte of memory each
											//The memory for the array is allocated as a contiguous segment for each of the elements of the array
											//Contiguous means to share a border- each of the elements are stored contiguously in sequential order
											//Contiguous: 'Touching or connected throughout in an unbroken sequence'
	printf("%d\n", stringLength(str));		//The stringLength function is called as the integer to be printed
											//NOTE: White space is counted in the string length
											//Thus, str has a string length of 11 'elements'
}

/*-------------STRING LENGTH FUNCTION-------------
INPUT: 		One variable of type char. (Note that in this case the variable is an array).
			The asterisk acts as a pointer to the first element of the string 
RETURN: 	The function returns the length of the string as an integer */
int stringLength(char *str) {		//This block is the 'function definition' which containes the operational code for out function		
	int length = 0;					//The integer variable 'length' has been declared, and initialised as 0
									//This variable will be used as an indexing tool
	char n;							//The character (data type 'char') variable n has been declared
									//n will be used to hold the numerical value of each element of the string 
	
	while(str[length] !=0) {		//Let's consider the first execution of this block of code
									//length has been initialised as 0 --> initially str[0] which is a 'pointer' to the first char of the array 't'
									//In ASCII the letter 't' has numeric value 116 (Confused? Google ASCII table)
									//Thus the condition is met (evaluated true as 116 doesn't equal zero) and the loop will be executed
		n = str[length];			//n has been assigned the value of str[length], which has value of 116 during this execution
		if(n != 0){					//Again, the condition is true as n (116) is not zero, so the if statement will execute
			length++;				//The length variable has been incremented
									//This loop will continue to execute, incrementing the length by 1 each time
									//Thus, a pointer to each sequential array element is created until the end of the string
									//At the end of the string the absence of a character is a NULL and evaluates to 0, the loop is exited.
		}
	}
	return length;					//The last length stored is the return value and the length of the string! Yay!
}