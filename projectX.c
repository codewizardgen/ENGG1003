#include <stdio.h>



int main(){
    
    char text[50]= "PURPLE MICROWAVE DINASOUR";
    int key = 3;
    
    //print the base address of the array
    printf("%p\n", text);
    
    //print the array as a string
    printf("%s\n", text);
    
    //print the array by cycling through the characters
    int i, x;
    for(i=0; i<50;i++){
        printf("%c", text[i]);
    }
    printf("\n");

}
