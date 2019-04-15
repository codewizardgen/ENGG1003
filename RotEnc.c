#include <stdio.h>

char rotEnc (char x);
char rotDec (char x);

int main(void)
{
    int index = 0, max = 200;
    char message[] = "TVU TVAOTH: AOL KHAH IYVBNOA AV BZ IF AOL IVAOHU ZWPLZ WPUWVPUAZ AOL LEHJA SVJHAPVU VM AOL LTWLYVY'Z ULD IHAASL ZAHAPVU. DL HSZV RUVD AOHA AOL DLHWVU ZFZALTZ VM AOPZ KLHAO ZAHY HYL UVA FLA VWLYHAPVUHS. DPAO AOL PTWLYPHS MSLLA ZWYLHK AOYVBNOVBA AOL NHSHEF PU H CHPU LMMVYA AV LUNHNL BZ, PA PZ YLSHAPCLSF BUWYVALJALK. IBA TVZA PTWVYAHUA VM HSS, DL'CL SLHYULK AOHA AOL LTWLYVY OPTZLSM PZ WLYZVUHSSF VCLYZLLPUN AOL MPUHS ZAHNLZ VM AOL JVUZAYBJAPVU VM AOPZ KLHAO ZAHY. THUF IVAOHUZ KPLK AV IYPUN BZ AOPZ PUMVYTHAPVU";
    for(index = 0; index < max; index++){
        if (message[index] >= 65 && message[index]<=90){
            int temp = message[index]-65;
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
/*------ROTATION ENCRYPTION FUNCTION--------
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