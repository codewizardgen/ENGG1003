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
    //calculate mean intensity for each colour by dividing by 5*5 (number of pixels)
    red /= (5*5);
    green /= (5*5);
    blue /= (5*5);
    
    printf("%f %f %f\n", red, green, blue);
    
    //find the pixel with the highest intesity of red, that with green and blue also (3 separate pixels)
    float redHigh = 0, greenHigh = 0, blueHigh = 0, rx, ry, gx, gy, bx, by;
    for (x = 0; x < 5; x++){
        for(y = 0; y < 5; y++){
            if (image[x][y][0]>redHigh){
                redHigh = image[x][y][0];
                rx = x;
                ry = y;
                continue;
            }
            if (image[x][y][1]>greenHigh){
                greenHigh = image[x][y][1];
                gx = x;
                gy = y;
                continue;
            }
            if (image[x][y][2]>blueHigh){
                blueHigh = image [x][y][2];
                bx = x;
                by = y;
                continue;
            }
        }
    }
    printf("Highest intesity red is %f located at image[%f][%f]\n", redHigh, rx, ry);
    printf("Highest intesity green is %f located at image[%f][%f]\n", greenHigh, gx, gy);
    printf("Highest intesity blue is %f located at image[%f][%f]\n", blueHigh, bx, by);
    return 0;
}
