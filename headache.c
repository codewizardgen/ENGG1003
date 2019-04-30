#include <stdio.h>

/* TWO DIMENTIONAL ARRAYS IN C
 * https://beginnersbook.com/2014/01/2d-arrays-in-c-example/
 * 
 */

int main(){
    int disp[2][3];
    int i, j;
    for (i=0; i<2; i++){
        for(j=0;j<3;j++){
            printf("Enter value for disp[%d][%d]:", i, j);
            scanf("%d", &disp[i][j]);
        }
    }
    
    printf("Two dimentional array elements:\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d", disp[i][j]);
            if(j==2){
                printf("\n");
            }
        }
    }
    return 0;
    
}