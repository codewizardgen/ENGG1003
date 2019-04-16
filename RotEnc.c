#include <stdio.h>

char rotEnc (char x);
char rotDec (char x);
void helloHousekeeping (char *x, int N);

int main(void)
{
    int index = 0;
    const int MAX = 200;
    char text[] = "TVU TVAOTH: AOL KHAH IYVBNOA AV BZ IF AOL IVAOHU ZWPLZ WPUWVPUAZ AOL LEHJA SVJHAPVU VM AOL LTWLYVY'Z ULD IHAASL ZAHAPVU. DL HSZV RUVD AOHA AOL DLHWVU ZFZALTZ VM AOPZ KLHAO ZAHY HYL UVA FLA VWLYHAPVUHS. DPAO AOL PTWLYPHS MSLLA ZWYLHK AOYVBNOVBA AOL NHSHEF PU H CHPU LMMVYA AV LUNHNL BZ, PA PZ YLSHAPCLSF BUWYVALJALK. IBA TVZA PTWVYAHUA VM HSS, DL'CL SLHYULK AOHA AOL LTWLYVY OPTZLSM PZ WLYZVUHSSF VCLYZLLPUN AOL MPUHS ZAHNLZ VM AOL JVUZAYBJAPVU VM AOPZ KLHAO ZAHY. THUF IVAOHUZ KPLK AV IYPUN BZ AOPZ PUMVYTHAPVU";
    for(index = 0; index < MAX; index++){
        helloHousekeeping(text, MAX);                       //Call the cleaning function
        if (text[index] >= 65 && text[index]<=90){
            int temp = text[index]-65;
    	    int encryption = rotEnc (temp);
    	    printf("%c ", encryption);
    	    int decryption = rotDec (temp);
    	    printf("%c", decryption);
        }
	    else {
	        printf(" ");
	    }
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
