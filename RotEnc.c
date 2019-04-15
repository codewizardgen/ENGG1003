#include <stdio.h>

int main(void)
{
    int index = 0, max = 100;
    char message[] = "THIS IS AN EXAMPLE- SEND HELP!";  
    //Leaving the number of array elements blank
    //The compiler will assign enough memory for the elements there
    for(index = 0; index < max; index++){
	    int temp = message[index]-65;
	    printf("%d\n", temp);
	}
	return 0;
    
    
    return 0;
}