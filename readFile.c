#include <stdio.h>

void zero (int *x);

int main(void)
{
    int array [7][7];
    
    FILE *input;
    input = fopen("hello", "r");
    
    int i, j;
    for (i=0; i<7; i++){
        for(j=0; j<7; j++){
            zero(&array[i][j]);
            fscanf(input, "%d", &array[i][j]);
            if (array[i][j]==0){
                break;
            }
            printf("%d ", array[i][j]);
            if (j==6){
                printf("\n");
            //    break;
            }

        }
    }
    
    fclose(input);
    return 0;
}

void zero (int *x){
    *x = 0;
}