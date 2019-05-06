#include <stdio.h>
#include <math.h>

void mean (int *a, int *b, int *c);

int main(void)
{
   int a = 1, b = 2, c = 3;
   
   printf("%d %d %d\n", a, b, c);
   mean(&a, &b, &c);
   printf("%d %d %d\n", a, b, c);
   
   return 0;
}

void mean (int *a, int *b, int *c){
    *a = (int)((*a + *b + *c)/3.0);
    *b = 0;
    *c = 0;
}