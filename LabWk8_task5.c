#include <stdio.h>

int main(void) {
        
    int arrayData[3][3];
    
    FILE *input;
    // Open the file
    input = fopen("Input1", "r");

    // Read the data from the file into arrayData    
    int row = 0, column = 0;
    for(row = 0; row < 3; row++){
        for(column = 0; column < 3; column++){
            fscanf(input, "%d\n", &arrayData[row][column]);
        } 
    }
    //print the array as seen in the file
    for (row = 0; row <3; row++){
        for (column = 0; column <3; column++){
            printf("%d ", arrayData[row][column]);
            if (column == 2){
                printf("\n");
            }
        }
    }
    

    // Find the largest value, print it, and it’s indices
    int bigBoy = 0, rowMrkr = 0, colMrkr = 0;
    for (row = 0; row < 3; row++){
        for (column = 0; column <3 ; column++){
            if (arrayData[row][column]>bigBoy){
                bigBoy = arrayData[row][column];
                rowMrkr = row;
                colMrkr = column;
            }
        }
    }
    printf("Largest value: %d\n", bigBoy);
    printf("Location in array: row = %d, column = %d\n", rowMrkr, colMrkr);
}
