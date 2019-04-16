#include <stdio.h>

char rotEnc (char x);
char rotDec (char x);
void helloHousekeeping (char *x, int MAX);
int theCount (char *x, char MAX);
char normalise (char *x, char index, int MAX);

int main(void)
{
    int index = 0;
    const int MAX = 200;
    char text[] = "YAHTZEE";
    
    helloHousekeeping(text, MAX);                       //Call the cleaning function
    normalise (text, index, MAX);
    
    for (text >= 65 && text <=90){
        printf ("%c", rotEnc(text));
    }

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

char normalise (char *x, char index, int MAX){
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
}