#include <stdio.h>

void rotEnc(int k, int MAX, char *text);
void rotDec(int k, int MAX, char *text);

int main(){
    
    ////////////////////////
    //hard coded inputs 
    ////////////////////////
    char message[30]= "PURPLE MICROWAVE DINASOUR";
    char message2[30]= "SXUSOH PLFURZDYH GLQDVRXU";
    char message3[40]= "ABC DEF GHI JKL MNO PQR STU VWX YZ";
    int key = 3;
    char key2[26] = "QWERTYUIOPASDFGHJKLZXCVBNM";
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
    int encode_type = 3;
    if (encode_type==1){
        rotEnc(k, MAX, message);    
    }
    else if (encode_type==2){
        rotDec(k, MAX, message2);
    }
    else {
         //////////////////
    //DEVELOPMENT ZONE (before turning into function)
    /////////////////////
    // Substitution
    
/*        for (i=0; i<length; i++){
            int j;
            for(j=0; j<26; j++){
                if(message3[i]==65+j){
                    message3[i]=key2[j];
                }
            }
*/
//if a character of message3 is A(65) it will be changed to the letter at the first memory address of key2
//if a character of message3 is B(66) it will be changed to the letter at the second memory address of key 2 etc.
           if(message3[i]==65){                 
                message3[i]= key2[0];
            }
            else if(message3[i]==66){
                message3[i]= key2[1];
            }
            else if(message3[i]==67){
                message3[i]= key2[2];
            }
            else if(message3[i]==68){
                message3[i]= key2[3];
            }
            else if(message3[i]==69){
                message3[i]= key2[4];
            }
            else if(message3[i]==70){
                message3[i]= key2[5];
            }
            else if(message3[i]==71){
                message3[i]= key2[6];
            }
            else if(message3[i]==72){
                message3[i]= key2[7];
            }
            else if(message3[i]==73){
                message3[i]= key2[8];
            }
            else if(message3[i]==74){
                message3[i]= key2[9];
            }
            else if(message3[i]==75){
                message3[i]= key2[10];
            }
            else
                message3[i]= message3[i];

        }
        printf("%s", message3);
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

