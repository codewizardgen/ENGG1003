#include <stdio.h>

char RotEnc (char x);
char RotDec (char x);

int main(void)
{
    int index = 0, max = 100;
    char message[] = "YMNX NX FS JCFRUQJ XJSI MJQU";
    //char message[] = "THIS IS AN EXAMPLE- SEND HELP!";  
    //Leaving the number of array elements blank
    //The compiler will assign enough memory for the elements there
    for(index = 0; index < max; index++){
        if (message[index] >= 65 && message[index]<=90){
            int temp = message[index]-65;
    	    //int encryption = RotEnc (temp);
    	    //printf("%c ", encryption);
    	    int decryption = RotDec (temp);
    	    printf("%c", decryption);
        }
	    else {
	        printf(" ");
	    }
	}
	return 0;
}

char RotEnc (char x) {     
    char key = 5;
    x = (x + key)%26;
    x += 65;                        //add 65 so that numbers correctly align with correct section of ASCII
    return x;
}

char RotDec (char x){
    char key = 5;
    x = (x - key)%26;
    return x;
}