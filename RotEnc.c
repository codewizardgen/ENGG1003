#include <stdio.h>

char RotEnc (char x);

int main(void)
{
    int index = 0, max = 100;
    char message[] = "THIS IS AN EXAMPLE- SEND HELP!";  
    //Leaving the number of array elements blank
    //The compiler will assign enough memory for the elements there
    for(index = 0; index < max; index++){
        if (message[index] >= 65 && message[index]<=90){
            int temp = message[index]-65;
    	    int encryption = RotEnc (temp);
    	    printf("%d ", encryption);
        }
	    else {
	        printf(" ");
	    }
	}
	return 0;
}

char RotEnc (char x) {
    x = x + 5;
    if (x >= 26) {
        x-=26;
    }
}