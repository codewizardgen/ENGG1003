#include <stdio.h>

//https://www.youtube.com/watch?v=qEQI4wJ1_9g
//SUBTRACTING POINTERS (same array)
//EQUALS: number of elements separating 
//(the elements to which the pointers correspond)

int main(){
    //declare and initialise an array
    int x[] = {1, 2, 3, 4, 5};
    //declare two pointers
    int *j, *i;
    //store the address of the 1st element in j
    j = &x[1];    //same as j = x + 1
    //store the address of the 1st element in i
    i = &x[4];    //same as i = x + 4
 
    printf("%lu", i-j); //same as (x+4)-(x+1) = 3
    //note used %d initially but error said it's 'long int'
 
    return 0;
}

    
