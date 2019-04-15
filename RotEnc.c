#include <stdio.h>

char rotEnc (char x);
char rotDec (char x);

int main(void)
{
    int index = 0, max = 100;
    char message[] = "TVU TVAOTH: AOL KHAH IYVBNOA AV BZ IF AOL IVAOHU ZWPLZ WPUWVPUAZ AOL LEHJA SVJHAPVU VM AOL LTWLYVY'Z ULD IHAASL ZAHAPVU. DL HSZV RUVD AOHA AOL DLHWVU ZFZALTZ VM AOPZ KLHAO ZAHY HYL UVA FLA VWLYHAPVUHS. DPAO AOL PTWLYPHS MSLLA ZWYLHK AOYVBNOVBA AOL NHSHEF PU H CHPU LMMVYA AV LUNHNL BZ, PA PZ YLSHAPCLSF BUWYVALJALK. IBA TVZA PTWVYAHUA VM HSS, DL'CL SLHYULK AOHA AOL LTWLYVY OPTZLSM PZ WLYZVUHSSF VCLYZLLPUN AOL MPUHS ZAHNLZ VM AOL JVUZAYBJAPVU VM AOPZ KLHAO ZAHY. THUF IVAOHUZ KPLK AV IYPUN BZ AOPZ PUMVYTHAPVU";
    //char message[] = "THIS IS AN EXAMPLE- SEND HELP!";  
    //Leaving the number of array elements blank
    //The compiler will assign enough memory for the elements there
    for(index = 0; index < max; index++){
        if (message[index] >= 65 && message[index]<=90){
            int temp = message[index]-65;
    	    //int encryption = rotEnc (temp);
    	    //printf("%c ", encryption);
    	    int decryption = rotDec (temp);
    	    printf("%c", decryption);
        }
	    else {
	        printf(" ");
	    }
	}
	return 0;
}

char rotEnc (char x) {     
    char key = 5;
    x = (x + key)%26;
    x += 65;                        //add 65 so that numbers correctly align with correct section of ASCII
    return x;
}

char rotDec (char x){
    char key = 0;
    for(key = 1; key < 26; key++){          //need to temporarily store each chain and check for intelligibility
        x = (x - key)%26;
        x+=65; 
    }
    return x;
}