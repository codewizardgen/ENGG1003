#include <stdio.h>

int main(){
    //learning about arrays and pointers
    int text[30] = {13, 12, 11} ;
    
    //print the address of the first element of the array
    //print the name of the array and
    //NOTE: That these two are the same
    //These are both pointers hence %p required
    printf("%p %p\n", &text[0], text);
    
    //print the integer stored address of the first element of array
    printf("%d\n", *text);
    //print the element stored at the address of the next element of the array
    printf("%d\n", *(text + 1));
}