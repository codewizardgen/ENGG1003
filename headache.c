#include <stdio.h>

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
    
    //print all the elements of the array on a new line
    //use different formats so the number will appear twice
    int i;
    for (i=0; i<5; i++){
        printf("%d %d\n", str[i], *(str + i));
    }
    
    //NOTE: str[i]= *(str+i) = *(i+str) = i[str]
    //Hence the following loop will render the same output
    
    for (i=0; i<5; i++){
        printf("%d\n", i[str]);
    }
}