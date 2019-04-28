#include <stdio.h>

//https://www.youtube.com/watch?v=qEQI4wJ1_9g
//LEARNING OBJECTIVES:
//Value of array variable = Address of first element
//Elements of the array can be accessed using pointers

int main(){
    //learning about arrays and pointers
    int str[30] = {13, 12, 11, 7, 6} ;
    
    //print the address of the first element of the array
    //print the name of the array and
    //NOTE: That these two are the same
    //These are both pointers hence %p required
    printf("%p %p\n", &str[0], str);
    
    //print the integer stored address of the first element of array
    printf("%d\n", *str);
    //print the element stored at the address of the next element of the array
    printf("%d %d\n", *(str + 1), str[1]);
    
    //The following loop moves through each array element using index incrementation
    //print all the elements of the array on a new line
    //print all of the elements of the array using pointer syntax
    int i;
    for (i=0; i<5; i++){
        printf("str[i]: %d\n", str[i]);
        printf("*(str + i): %d\n", *(str + i));
    }
    
    //NOTE: str[i]= *(str+i) = *(i+str) = i[str]
    //Hence the following loop will render the same output 
    //(but with no duplicate as above)
   
   
   /* PROOF: ARRAY NAMES ARE POINTERS*/
    for (i=0; i<5; i++){
        printf("i[str]: %d\n", i[str]);
    }
    
    //lets's create a pointer to the first array variable
    int *pstr;
    //in pstr, store the first index address of the array (str)
    //pstr thus a pointer variable to the first element of the array
    pstr = str;
    //print the second variable of the array
    //* in this case dereferences the pointer
    //meaning: instead of the address, give me the integer at that address
    printf("*(pstr + 1): %d\n", *(pstr + 1));
    printf("pstr[1]: %d\n", pstr[1]);
    
    
    
}