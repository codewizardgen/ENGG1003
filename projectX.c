#include <stdio.h>

void rotEnc(int k, int MAX);

int main(){
    
    ////////////////////////
    //hard coded inputs 
    ////////////////////////
    char text[30]= "PURPLE MICROWAVE DINASOUR";
    int key = 3;
    int length = 30;
    int i;
    
    //call an input function here
    //not used currently
    
    
    
    //////////////////////////
    // ENCODE
    ///////////////////////////
    int k = key;
    int MAX = length;
    
    //passes inputs;
    //create new variable names to be passed to each function
    
    //hard coded input based switch 
    //encode_type=1; //1=rotary, 2=substitution
    int encode_type = 1;
    if (encode_type==1){
        rotEnc(k, MAX);    
    }
    else if (encode_type==2){
        //otherEnc);
    }

}

/////////////////////////////////////
//FUNCTION DEFINITIONS
/////////////////////////////////////   

void rotEnc(int k, int MAX){
    //input variables - m for message, k for key
    

    char text[30]= "PURPLE MICROWAVE DINASOUR";
    int x, m, i;
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
