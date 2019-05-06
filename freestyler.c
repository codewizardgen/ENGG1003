#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main() {
    float image[5][5][3];
    int x, y;
    // Don’t change this srand() line!
    srand(0);
    for(y = 0; y < 5; y++) {
        for(x = 0; x < 5; x++) {
        image[x][y][0] = (float)rand()/(float)INT_MAX;
        image[x][y][1] = (float)rand()/(float)INT_MAX;
        image[x][y][2] = (float)rand()/(float)INT_MAX;
        }
    }
    // ----------------------------------------
    // Write your code below this comment block
    // ----------------------------------------
    //print the array values so we know what they are
    for(y = 0; y < 5; y++) {
        for(x = 0; x < 5; x++) {
            printf("{%.3f, %.3f, %.3f} ", image[x][y][0], image[x][y][1], image[x][y][2]);
            if (x == 4){
                printf("\n");
            }
        }
    }
    //calculate the  total intensity of each colour
    float red = 0, green = 0, blue = 0;
    for(y = 0; y < 5; y++) {
        for(x = 0; x < 5; x++) {
            red += image[x][y][0];
            green += image[x][y][1];
            blue += image[x][y][2];
        }
    }
    //5*5 is the number of pixels
    red /= (5*5);
    green /= (5*5);
    blue /= (5*5);
    
    printf("%f %f %f\n", red, green, blue);

    return 0;
}
