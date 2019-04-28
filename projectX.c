#include <stdio.h>

void rotEnc(int k, int MAX, char *text);
void rotDec(int k, int MAX, char *text);
void subEnc(char *k, int MAX, char *text);

int main(){
    
    ////////////////////////
    //hard coded inputs 
    ////////////////////////
    char message[30]= "PURPLE MICROWAVE DINASOUR";
    char message2[30]= "SXUSOH PLFURZDYH GLQDVRXU";
    char message3[40]= "ABC!DEF*GHIJKL MNO PQR STU VWX YZ";
    char message4[40]= "JVM!KMN*BGGHAL DFG HJK LMB CVB NM";
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
    else if (encode_type==3){
        printf("\n %d\n", key2[0]);
        subEnc(key2, MAX, message3);
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

void subEnc(char *k, int MAX, char *text){
//if a character of message3 is A(65) it will be changed to the letter at the first memory address of key (k)
//if a character of message3 is B(66) it will be changed to the letter at the second memory address of key (k) etc.
    int i;
    char temp_text[50];
    for(i=0; i<MAX; i++){
        if(text[i]==65){                 
            temp_text[i]= k[0];
        }
        if(text[i]==66){
            temp_text[i]= k[1];
        }
        if(text[i]==67){
            temp_text[i]= k[2];
        }
        if(text[i]==68){
            temp_text[i]= k[3];
        }
        if(text[i]==69){
            temp_text[i]= k[4];
        }
        if(text[i]==70){
            temp_text[i]= k[5];
        }
        if(text[i]==71){
            temp_text[i]= k[6];
        }
        if(text[i]==72){
            temp_text[i]= k[7];
        }
        if(text[i]==73){
            temp_text[i]= k[8];
        }
        if(text[i]==74){
            temp_text[i]= k[9];
        }
        if(text[i]==75){
            temp_text[i]= k[10];
        }
        if(text[i]==76){
            temp_text[i]= k[11];
        }
        if(text[i]==77){
            temp_text[i]= k[12];
        }
        if(text[i]==78){
            temp_text[i]= k[13];
        }
        if(text[i]==79){
            temp_text[i]= k[14];
        }
        if(text[i]==80){
            temp_text[i]= k[15];
        }
        if(text[i]==81){
            temp_text[i]= k[16];
        }
        if(text[i]==82){
            temp_text[i]= k[17];
        }
        if(text[i]==83){
            temp_text[i]= k[18];
        }
        if(text[i]==84){
            temp_text[i]= k[19];
        }
        if(text[i]==85){
            temp_text[i]= k[20];
        }
        if(text[i]==86){
            temp_text[i]= k[21];
        }
        if(text[i]==87){
            temp_text[i]= k[22];
        }
        if(text[i]==88){
            temp_text[i]= k[23];
        }
        if(text[i]==89){
            temp_text[i]= k[24];
        }
        if(text[i]==90){
            temp_text[i]= k[25];
        }
        else
            temp_text[i]= text[i];       //not nessecary just thinking through
        } 
    printf("%s\n", temp_text);
    }