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
    //print the array values
    for(y = 0; y < 5; y++) {
        for(x = 0; x < 5; x++) {
            printf("{%.3f, %.3f, %.3f} ", image[x][y][0], image[x][y][1], image[x][y][2]);
            if (x == 4){
                printf("\n");
            }
        }
    }
    
    return 0;
}
