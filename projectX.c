#include <stdio.h>

void rotEnc(int k, int MAX, char *text);
void rotDec(int k, int MAX, char *text);

int main(){
    
    ////////////////////////
    //hard coded inputs 
    ////////////////////////
    char message[30]= "PURPLE MICROWAVE DINASOUR";
    char message2[30]= "SXUSOH PLFURZDYH GLQDVRXU";
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
    int encode_type = 2;
    if (encode_type==1){
        rotEnc(k, MAX, message);    
    }
    else if (encode_type==2){
        rotDec(k, MAX, message2);
    }

}

/////////////////////////////////////
//FUNCTION DEFINITIONS
/////////////////////////////////////   

void rotEnc(int k, int MAX, char *text){
    //input variables - m for message, k for key
    
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

void rotDec(int k, int MAX, char *text){
        int x, c, i;
    for (i=0; i<MAX;i++){
        c = text[i] - 65;
        if (text[i]>=65 && text[i]<=90){
            x = (c - k)%26;
        }
        else
            x = c;
        x += 65;
        printf("%c", x);
    }
    printf("\n");
}

