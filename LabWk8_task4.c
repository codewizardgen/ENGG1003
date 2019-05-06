#include <stdio.h>

int main(void){
    float myArray[3][3] = {{0.1, 0.2, 0.3}, {1.1, 1.2, 1.3}, {2.1, 2.2, 2.3}};
    
    int x = 0, y = 0;
    float sum = 0;
    for (y = 0; y < 3; y++){
        for (x = 0; x < 3; x++){
            sum += myArray[y][x];
            printf("%f\n", sum);
        }
    }
    float mean = sum/(3*3);
    printf("%f\n", mean);
}