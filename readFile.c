#include <stdio.h>

void zero (char *x);

int main(void)
{
    char array [40];
    
    FILE *input;
    input = fopen("hello", "r");
    
    int i;
    for (i=0; i<40; i++){
        zero(&array[i]);
        fscanf(input, "%c", &array[i]);
        printf("%c", array[i]);
        if (array[i]==0){
            printf("\n");
            break;
        }
    }
    
    fclose(input);
    return 0;
}

void zero (char *x){
    *x = 0;
}