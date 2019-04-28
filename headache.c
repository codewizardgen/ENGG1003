#include <stdio.h>

//https://www.youtube.com/watch?v=Wp2OLv7L6LY
//INTRO TO FUNCTIONS
//Each has a unique name, which is used to call the function in main
//'Calling' a function causes the code within the function to execute
//A function is like an island- independant.
//Each function performs a specific task and can return a value (only one)

int sum();          //the function definition is known as forward declaration
int greatest(int a, int b, int c);

int main(){

    //int r1 = sum();
    //int r2 = sum();
    //printf("Result 1: %d\nResult 2 %d\n", r1, r2);
    int n1, n2, n3;
    n1 = 45;
    n1 = 72;
    n3 = 56;
    int r1 = greatest(n1, n2, n3);
    printf("%d is greatest", r1);
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

//NOTE: the function parameters (a, b, c) 
//DO NOT have to be the same as the variables which are passed (n1, n2, n3)
int greatest(int a, int b, int c){
    if (a>b)
        if (a>c)
            return a;
        else
            return c;
    else
        if (b>c)
            return b;
        else
            return c;        
}
