#include <stdio.h>

int main(void)
{
    char message[] = "I've been taken prisoner- SEND HELP!";  
    //Leaving the number of array elements blank
    //The compiler will assign enough memory for the elements there
    printf("%s\n", message);
    
    
    return 0;
}