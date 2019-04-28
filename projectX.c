#include <stdio.h>

void rotEnc(int k, int MAX, char *text);
void rotDec(int k, int MAX, char *text);
void subEnc(char *k, int MAX, char *text);

void subDec (char *k2, char *k3, int MAX, char *m4);

int main(){
    
    ////////////////////////
    //hard coded inputs 
    ////////////////////////
    char message[30]= "PURPLE MICROWAVE DINASOUR";
    char message2[30]= "SXUSOH PLFURZDYH GLQDVRXU";
    char message3[40]= "IF IT'S YELLOW LET IT MELLOW!";
    char message4[40]= "OY OZ'L NTSSGV STZ OZ DTSSGV!";
    int key = 3;
    char key2[26] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    char key3[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
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
    int encode_type = 4;
    if (encode_type==1){
        rotEnc(k, MAX, message);    
    }
    else if (encode_type==2){
        rotDec(k, MAX, message2);
    }
    else if (encode_type==3){
        subEnc(key2, MAX, message3);
    }

    else {
         //////////////////
    //DEVELOPMENT ZONE (before turning into function)
    /////////////////////
    // Substitution decryption
    
        printf("back in development zone\n");
        

        
        subDec(key2, key3, MAX, message4);        
             
    }          //close else
}              //close main

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
        else if (text[i]<65||text[i]>90) {
            temp_text[i]= text[i];       
        }
           
        } 
  
//    for(i=0; i<MAX; i++){
//        printf("%c", temp_text[i]);
//    }
    printf("%s\n", temp_text);
}
    


////////////////////////////////////
//SUBSTITUTION DECRYPTION
//////////////////////////////////

void subDec (char *k2, char *k3, int MAX, char *m4){
    printf("%s\n", m4);     //print message input
    printf("%d\n", m4[22]-65);
    int i;
    char temp_text[50];
    int diff[26];
    //the following loop finds the diff between letters to be exchanged
    for(i=0; i<MAX; i++){
        if(k2[i]==65){
            diff[0] = k2[i]-k3[i];
        }
        if(k2[i]==66){
            diff[1] = k2[i]-k3[i];
        }
        if(k2[i]==67){
            diff[2] = k2[i]-k3[i];
        }
        if(k2[i]==68){
            diff[3] = k2[i]-k3[i];
        }
        if(k2[i]==79){            
            diff[14] = k2[i]-k3[i];                 
        }
    }
    //the following loop exchanges the appropriate letter back in
    for(i=0; i<MAX; i++){
        if(m4[i]==65){
            temp_text[i] = 65 - diff[0];
        }
        if(m4[i]==66){
            temp_text[i] = 66 - diff[1];
        }
        if(m4[i]==67){
            temp_text[i] = 67 - diff[2];
        }
        if(m4[i]==68){
            temp_text[i] = 68 - diff[3];
        }
        if(m4[i]==79){
            temp_text[i] = 79 - diff[14];
        }
        else{
            temp_text[i] = m4[i];
        }
    }
        //printf("%s", temp_text);
    for(i=0; i<MAX; i++){
        printf("%c", temp_text[i]);
    }
    printf("\n");
}