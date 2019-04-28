#include <stdio.h>

//https://www.youtube.com/watch?v=Wp2OLv7L6LY
//INTRO TO FUNCTIONS
//Each has a unique name, which is used to call the function in main
//'Calling' a function causes the code within the function to execute
//A function is like an island- independant.
//Each function performs a specific task and can return a value (only one)

int sum();          //the function definition is known as forward declaration

int main(){

    int r1 = sum();
    int r2 = sum();
    printf("Result 1: %d\nResult 2 %d\n", r1, r2);
}

int sum(){
    int a, b, c;
    printf("Enter the first number: \n");
    scanf("%d", &a);
    printf("Enter the second number: \n");
    scanf("%d", &b);
    printf("Enter the third number: \n");
    scanf("%d", &c);
    //printf("Sum of %d, %d & %d is %d\n", a, b, c, a+b+c);
    return a+b+c;
}
    
