
#include <stdio.h>

void swap(int *x, int *y);

int main(void)
{
    int a = 7, b = 108;
    printf("%d %d\n", a, b);
    swap(&a, &b);
    printf("%d %d\n", a, b);
}

void swap(int *x, int *y){
    int tmp;
    
    tmp = *x;
    *x = *y;
    *y = tmp;
}