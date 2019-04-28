#include <stdio.h>

void rotEnc(void);

int main(){
    
    ////////////////////////
    //hard coded inputs 
    ////////////////////////
    char text[30]= "PURPLE MICROWAVE DINASOUR";
    int k = 3;
    
    //call an input function here
    //not used currently
    
    
    
    //////////////////////////
    // encode
    ///////////////////////////
    
    int i;

    //hardcoded inputs
    int MAX = 30;
    
    //passes inputs;
    
    
    //hard coded input based switch 
    //encode_type=1; //1=rotary, 2=substitution
    int encode_type = 1;
    if (encode_type==1){
        rotEnc();    
    }
    else if (encode_type==2){
        //otherEnc);
    }
    
    
    
    for(i=0; i<MAX; i++){
        printf("%c", text[i]);
    }
    printf("a \n");

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
    printf("b \n");
}

void rotEnc(void){
    //input variables - m for message, k for key
    

    char text[30]= "PURPLE MICROWAVE DINASOUR";
    int MAX = 30;
    int k = 3;
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
    printf("c\n");
}
