#include <stdio.h>



int main(){
    
    char text[30]= "PURPLE MICROWAVE DINASOUR";
    int k = 3;
    
    //print the array by cycling through the characters
    
    int i;
    int MAX = 30;
    for(i=0; i<MAX; i++){
        printf("%c", text[i]);
    }
    printf("\n");

    //Rotation encryption
    int x, m;
    for (i=0; i<MAX;i++){
        m = text[i] - 65;
        if (text[i]>=65 && text[i]<=90){
            x = (m + k)%26;
        }
        else
            x = m;
        x += 65;
        printf("%c", x);
    }
    printf("\n");
}
