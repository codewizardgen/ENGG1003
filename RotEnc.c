#include <stdio.h>

char rotEnc (char x);
char rotDec (char x);
void helloHousekeeping (char *x, int MAX);
int theCount (char *x, char MAX);
//char normalise (char *x, char index, int MAX);

int main(void)
{
    int index = 0;
    const int MAX = 200;
    char text[] = "YAHTZEE";
    
    for(index = 0; index < MAX; index++){
        //Call the cleaning function
        helloHousekeeping(text, MAX);  
        if (text[index] >= 65 && text[index] <=90){
  
            //Normalize before encryption using the key
            //i.e. Change ASCII values of letters so the A - Z spans 0 - 25
            char norm = text[index]-65;
            printf ("%c", rotEnc(norm));
        }
        else {
	        printf(" ");
	    }
    }
    
        
   // }

	return 0;
}
/*---------ROTATION ENCRYPTION FUNCTION: 'RotEnc'---------------------------
INPUT:  An array element x (each letter in the string of text to be encrypted)
        Each letter has a numeric value (google ASCII table)
        The letters recieved as input for this fuction have been normalised,
        such that A = 0, B = 1, ... Z = 25.
OUTPUT: The letter occuring 'key' places after the letter input
How it works:   --> The key specifies rotation amount
                --> %26 calculates the remainder when (x + key) is divided by 26.
                This means that 26 becomes zero, 27 becomes 1 etc,
                which keeps all our values between (or equal to) 0 and 25
                --> In order to obtain a letter (ASCII) again 65 is added to x*/
char rotEnc (char x) {     
    char key = 5;
    x = (x + key)%26;
    x += 65;                        
    return x;
}

char rotDec (char x){
    char key = 0;
    for(key = 1; key < 26; key++){          //need to temporarily store each chain and check for intelligibility
        x = (x - key)%26;
        x += 65; 
    }
    return x;
}
/*------CLEANING FUNCTION: 'helloHousekeeping'----------------
What it does --> Sets all the memory addresses allocated to the array to 0
             --> Gets rid of old garbage numbers that may be stored there
INPUT:  Pointer to the first element of array and 
        the MAX number of elements in the array 
OUTPUT: there is none - this is why void is used before the name 'helloHousekeeping'
How it works --> The for loop systematically initiallises each array element 
                 to zero. 
             --> The syntax *x is a 'pointer' to the first element of array x
             --> At the end of each loop the index number increments,
             so on subsequent run throughs the next sequential element is zeroed
             --> The loop exits once the index reaches MAX (defined initially)*/
void helloHousekeeping (char *x, int MAX){
    int index;
    for (index = 0; index < MAX; index++){
        x[index] = 0;
        return;
    }   
}


int theCount (char *x, char MAX){
    int index = 0, sum = 0;
    for (index = 0; index < MAX; index++){
        sum += x[index];
        return sum;
    }
}

/* char normalise (char *x, char index, int MAX){
    int norm;
    for(index = 0; index < MAX; index++){
        if (x[index] >= 65 && x[index]<=90){
                norm = x[index]-65;
            }
        else {
            continue;       //Neccessary?
            }
    }

    return norm;
} */