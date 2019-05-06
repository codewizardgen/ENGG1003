#include <stdio.h>

void zeroInt(int *x);

int main(void)
{
    int i = 7;
    printf("%d\n", i);
    zeroInt(&i);
    printf("%d\n", i);
}

void zeroInt(int *x){
    *x = 0;
}