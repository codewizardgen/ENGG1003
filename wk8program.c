#include <stdio.h>

void readPPMHeader(char *filename, int *xres, int *yres);
void readPPmImage();

int main(void)
{
    int xres, yres;
    readPPMHeader("BUsample.ppm", &xres, &yres);
    
    int image[xres][yres][3];
    
    //read the image data
    FILE *input;
    input = fopen("BUsample.ppm", "r");
    
    {
    //the following advances the position indicator
    int tmp;
    fscanf(input, "P3\n%d %d\n%d", &tmp, &tmp, &tmp);
    }
    
    int x, y;
    for(y = 0; y < yres; y++){
        for(x = 0; x < xres; x++){
            fscanf(input, "%d\n%d\n%d\n", &image[x][y][0], &image[x][y][1], &image[x][y][2]);
        }
    }
    // calculate the mean value
    float rT = 0, gT = 0, bT = 0;
    for(y = 0; y < yres; y++){
        for(x = 0; x < xres; x++){
            rT += image[x][y][0];
            gT += image[x][y][1];
            bT += image[x][y][2];
        }
    }
    //xres*yres is the number of pixels
    rT /= (xres*yres);
    gT /= (xres*yres);
    bT /= (xres*yres);
    
    printf("%f %f %f", rT, gT, bT);
    
    fclose(input);


}

void readPPMHeader(char *filename, int *xres, int *yres){
    FILE *input;
    
    input = fopen(filename, "r");
    
    fscanf(input, "P3\n%d %d", xres, yres);
    
    fclose(input);
}