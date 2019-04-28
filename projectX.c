#include <stdio.h>

void rotEnc(int k, int MAX, char *text);
void rotDec(int k, int MAX, char *text);

int main(){
    
    ////////////////////////
    //hard coded inputs 
    ////////////////////////
    char message[30]= "PURPLE MICROWAVE DINASOUR";
    char message2[30]= "SXUSOH PLFURZDYH GLQDVRXU";
    char message3[40]= "ABC!DEF*GHIJKL MNO PQR STU VWX YZ";
    int key = 3;
    char key2[26] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    int length = 40;
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
           for(i=0; i<MAX; i++){
               if(message3[i]==65){                 
                    message3[i]= key2[0];
                }
                if(message3[i]==66){
                    message3[i]= key2[1];
                }
                if(message3[i]==67){
                    message3[i]= key2[2];
                }
                if(message3[i]==68){
                    message3[i]= key2[3];
                }
                if(message3[i]==69){
                    message3[i]= key2[4];
                }
                if(message3[i]==70){
                    message3[i]= key2[5];
                }
                if(message3[i]==71){
                    message3[i]= key2[6];
                }
                if(message3[i]==72){
                    message3[i]= key2[7];
                }
                if(message3[i]==73){
                    message3[i]= key2[8];
                }
                if(message3[i]==74){
                    message3[i]= key2[9];
                }
                if(message3[i]==75){
                    message3[i]= key2[10];
                }
                if(message3[i]==76){
                    message3[i]= key2[11];
                }
                if(message3[i]==77){
                    message3[i]= key2[12];
                }
                if(message3[i]==78){
                    message3[i]= key2[13];
                }
                if(message3[i]==79){
                    message3[i]= key2[14];
                }
                if(message3[i]==80){
                    message3[i]= key2[15];
                }
                if(message3[i]==81){
                    message3[i]= key2[16];
                }
                if(message3[i]==82){
                    message3[i]= key2[17];
                }
                if(message3[i]==83){
                    message3[i]= key2[18];
                }
                if(message3[i]==84){
                    message3[i]= key2[19];
                }
                if(message3[i]==85){
                    message3[i]= key2[20];
                }
                if(message3[i]==86){
                    message3[i]= key2[21];
                }
                if(message3[i]==87){
                    message3[i]= key2[22];
                }
                if(message3[i]==88){
                    message3[i]= key2[23];
                }
                if(message3[i]==89){
                    message3[i]= key2[24];
                }
                if(message3[i]==90){
                    message3[i]= key2[25];
                }
                else
                    message3[i]= message3[i];       //not nessecary just thinking through
            } 

        }
        printf("%s\n", message3);
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

