#include <stdio.h>

void readPPMHeader(char *filename, int *xres, int *yres);

int main(void)
{
    int xres, yres;
    readPPMHeader("BUsample.ppm", &xres, &yres);
    
    printf("%d %d", xres, yres);
}

void readPPMHeader(char *filename, int *xres, int *yres){
    FILE *input;
    
    input = fopen(filename, "r");
    
    fscanf(input, "P3\n%d %d", xres, yres);
}