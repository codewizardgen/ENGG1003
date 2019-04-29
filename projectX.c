#include <stdio.h>

/*--------------------FUNCTION PROTOTYPES------------------
 * Function prototypes are known as forward declaration and are a way to declare functions
 * Before the function is 'called' in main, the compiler needs to be given:
    --> The function's name which is unique
    --> The input variables and their data type (these variables will be passed to the function from main)
    --> The return data type
 * SYNTAX: return_type function_name (variable_type(s) Variable_names(s));
 */

/////////////////////////////
//FUNCTION PROTOTYPES
/////////////////////////////

void rotEnc(int k, int MAX, char *text);
//NAME: rotEnc, which is short for rotation encryption
//return type: void (the output occurs within the function and nothing returns to main)
//
//Input: k and MAX (data type integer or 'ínt') and *text (data type chararacter or 'char')
//'text' is the same as &text[0] which is the address of the first element of an array called text
//*text is a pointer to that address

void rotDec(int k, int MAX, char *text);
//rotDec has return type void and is passed variables k and MAX (type int) and *text (type char)
//To reiterate *text is a pointer to the address in memory of the first element of the array 'text'

void subEnc(char *k, int MAX, char *text);
//subEnc has no return value (hence void)
//input variables: pointer to the address of the first element of array named 'k' (data type char)
                // pointer to the address of the first element of array named 'text' (data type char)
                // MAX of integer data type

void subDec (char *k2, char *k3, int MAX, char *m4);
//subDec has no return type: void
//INPUT: 3 pointers (type char) to the memory addresses of the first elements of the arrays k2, k3 and m4
//         and the integer MAX


/////////////////////////////////////////
//MAIN
////////////////////////////////////////

int main(){
    
    ////////////////////////
    //hard coded inputs 
    ////////////////////////
    char message[30]= "PURPLE MICROWAVE DINASOUR";
    char message2[30]= "SXUSOH PLFURZDYH GLQDVRXU";
    char message3[40]= "DAD EGGS JUMP STACK ZOOM!";
    char message4[40]= "RQR TUUL PXDH LZQEA MGGD!";
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
    int MAX4 = 40;
    int length4 = 40;
    
    //passes inputs;
    //create new variable names to be passed to each function
    
    //hard coded input based switch 
    //change encode_type to change the function
    //1=rotary encryption, 2= rotary decryption 3= substitution encyption
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
        

        
        subDec(key2, key3, MAX4, message4);        
             
    }          
    //close else
    
}              
//close main

/////////////////////////////////////
//FUNCTION DEFINITIONS contain the code to be executed when a function is called.
/////////////////////////////////////   

/*---------ROTATION ENCRYPTION FUNCTION: 'RotEnc'---------------------------
INPUT:  --> A pointer to the memory address of the first element of an array 'text'
            The array text contains the message to be encrypted 
            Each element of the array is a letter in the string of text to be encrypted
            Each letter has a numeric value (google ASCII table)
        --> Maximum message length (MAX)
        --> The integer key 'k'
OUTPUT: A print statement with the encripted text
How it works:   --> The key specifies rotation amount
                --> read integrated comments
*/

void rotEnc(int k, int MAX, char *text){
    //input variables - m for message, k for key
    
    int x, m, i;
    //i is an index counter so we can cycle through each element of the array
    //m will sore the normalised (-65) integer value of each array element
    //x will be used to store the new integer value of each element after encryption
    
    for (i=0; i<MAX;i++){
        //this loop exits when MAX is reached and i is incremeted at the end of each execution
        //purpose is to allow each element (letter) of the array to be encypted
        
        m = text[i] - 65;
        //The letter at each element of the array is normalised by subtracting 65
        //i.e after this line of code the integer values of the letters in the array become
        //       A = 0, B = 1, ... Z = 25.
        
        if (text[i]>=65 && text[i]<=90){
            //condition here means that only characters A through Z will be encripted
            
            x = (m + k)%26;
            //The normilised letter (m) is shifted by the key (k) and stored in x
            //%26 calculates the remainder when (x + k) is divided by 26.
            //This means that 26 becomes zero, 27 becomes 1 etc,
            //which keeps all our values between (or equal to) 0 and 25
            
        }
        // end if
        
        else
        //for all other characters in the array that are not a letter from A to Z
            
            x = m;
            //the value will stay the same
            //spaces and apostrophies etc will not be altered by encryption
            
        x += 65;
        // add 65 to x and store it in x
        // this brings our integer values back into the range including 65 to 90
        // meaning that when the characters are printed they will display as 
        //encrypted upper case letters
        
        printf("%c", x);
        //each element of the array will be printed to the console after encryption
    }
    //end else
    
    printf("\n");
    //new line for clarity
    
}
//end rotEnc definition block of code

/*---------ROTATION DECRYPTION FUNCTION: 'RotDec'---------------------------
INPUT:  --> A pointer to the memory address of the first element of an array 'text'
            The array text contains the message to be decrypted 
        --> Maximum message length (MAX)
        --> The integer key 'k'
OUTPUT: A print statement with the decrypted text
How it works:   --> The key specifies rotation amount
                --> read integrated comments
*/
void rotDec(int k, int MAX, char *text){
    int x, c, i;
    //i is an index counter so we can cycle through each element of the array
    //m will sore the normalised (-65) integer value of each array element
    //x will be used to store the new integer value of each element after encryption
    
    for (i=0; i<MAX;i++){
        //this loop exits when MAX is reached and i is incremeted at the end of each execution
        //purpose is to allow each element (letter) of the array to be decypted
        
        c = text[i] - 65;
        //The letter at each element of the array is normalised by subtracting 65 stored as c
        //i.e after this line of code the integer values of the letters in the array become
        //       A = 0, B = 1, ... Z = 25.
        
        if (text[i]>=65 && text[i]<=90){
            //Ony capital letters will be decrypted
            
            x = (c - k)%26;
            //The normilised letter (c) is shifted by the key (k) and stored in x
            //%26 calculates the remainder when (c - k) is divided by 26.
            //This means that 26 becomes zero, 27 becomes 1 etc,
            //which keeps all our values between (or equal to) 0 and 25
            
        }
        //end if
        
        else
        //for all other characters in the array that aren't capital letters
        
            x = c;
            //stay the same
            
        x += 65;
        // reverse normalisation by adding 65 to x and storing it in x
        
        printf("%c", x);
        //print every letter after decryption
    }
    //end for
    
    printf("\n");
    //new line for clarity, to appear after all array elements are printed
}
//end rotDec definition code block


/*---------SUBSTITUTION ENCRYPTION FUNCTION: 'subEnc'---------------------------
INPUT:  --> A pointer to the memory address of the first element of an array 'text'
            The array text contains the message to be encrypted 
        --> Maximum message length (MAX)
        --> A pointer to the memory adress of the first element of the array 'k' (key)
OUTPUT: A print statement with the encrypted text
How it works:   --> The key specifies which letters will be substituted with another
                --> read integrated comments
                --> NOTE: this function is comprised by a series of if satements
                --> They correspond to  ASCII integer values of these letters
                    and are written in alphabetical order
                --> Each if statement converts a letter of the alphabet to 
                the letter in the key which occurs at the same index as the original letter
                occurs in the alphabet
*/
void subEnc(char *k, int MAX, char *text){
//if a character of message3 is A(65) it will be changed to the letter at the first memory address of key (k)
//if a character of message3 is B(66) it will be changed to the letter at the second memory address of key (k) etc.
    int i;
    //index variable
    
    char temp_text[50];
    //array to store encrypted message
    
    for(i=0; i<MAX; i++){
        //cycle through each letter in the input message text
        
        if(text[i]==65){
            //if an A (integer value 65) is found in 'text' (the input message)
            
            temp_text[i]= k[0];
            //in array 'text_temp' at the same index (i) location as letter A was found in input 'text' array
            //store the integer value of the first element of the array 'k'
            // in this case k[0] = 81 = Q
        }
        if(text[i]==66){
            //if the element of the array is a B
            
            temp_text[i]= k[1];
            //B is replaced by the second element of the array key
            
        }
        
        if(text[i]==67){
            // if the element of the array 'text' is C
            
            temp_text[i]= k[2];
            //C is replaced by the letter at k index 2
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
            // for all characters that are not A through Z
            
            temp_text[i]= text[i];    
            //store the value of text[] in temp_text at the same index as it occurs at in text[]
        }
        //end else if
           
        }
        //end for
  
//    for(i=0; i<MAX; i++){
//        printf("%c", temp_text[i]);
//    }
    printf("%s\n", temp_text);
    //text_temp is a pointer to the memory address of the first element of array called text_temp
    //text_temp = &text_temp[0]
    //%s format specifier will print the string of text stored in temp_text[]
    
}
    


////////////////////////////////////
//SUBSTITUTION DECRYPTION
//////////////////////////////////

void subDec (char *k2, char *k3, int MAX, char *m4){
    printf("%s\n", m4);     //print message input
    printf("%d\n%d\n", m4[22], m4[22]-65);
    printf("%d\n", k2[12]-k3[12]);
    int i;
    char temp_text[50];
    char diff[26];
    //the following loop finds the diff between letters to be exchanged
    for(i=0; i<26; i++){
        if(k2[i]==65){                      //find diff b/n A(65) in k2 and k3(normal order alphabet)
            diff[0] = k2[i]-k3[i];
        }
        if(k2[i]==66){
            diff[1] = k2[i]-k3[i];
        }
        if(k2[i]==67){
            diff[2] = k2[i]-k3[i];
        }
        if(k2[i]==68){
            printf("i: %d\n", i);
            diff[3] = k2[i]-k3[i];
            printf("%d\n", diff[3]);
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
            printf("%d", temp_text[i]);
        }
        if(m4[i]==79){
            temp_text[i] = 79 - diff[14];
        }
        else if (m4[i]<65 || m4[i]>90){
            temp_text[i] = m4[i];
        }
    }
        printf("%s", temp_text);
    for(i=0; i<MAX; i++){
        printf("%c", temp_text[i]);
    }
    printf("\n");
    printf("%d", temp_text[22]);
}       //close subDec