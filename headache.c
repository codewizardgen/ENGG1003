#include <stdio.h>

//https://www.youtube.com/watch?v=qEQI4wJ1_9g
//LEARNING OBJECTIVES:
//Value of array variable = Address of first element
//Elements of the array can be accessed using pointers

int main(){
    //learning about arrays and pointers
    char str[30] = "Let me try a string instead" ;
    
    //print the address of the first element of the array
    //print the value of the name of the array
    //NOTE: That these two are the same
    //These are both pointers hence %p required
    printf("%p %p\n", &str[0], str);
 
    //Print the string of characters using pointer (array name)
    //REMEMBER: * to dereference the pointer
    //THUS: obtain the characters (%c) at that address
    //Create a loop to cycle through each index
    int i;
    for (i=0; i<30; i++){
        printf("%c", *(str+i));
    }
    printf("\n");
    
    //what if I just want to print the first word
    //use %s to read a string
    //NOTE: no * for %s or error: expecting char* but it's an int

        for(i=0; i<30; i++){
            printf("%s\n", (str + i));
            //NOTE: printf("%s", str[i]) is the same statement
        }
 
    return 0;
}

    
