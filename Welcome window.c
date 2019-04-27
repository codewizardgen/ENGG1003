#include<stdio.h>
	
	/*
	FUNCTION PROTOTYPES are how functions are declared
	SYNTAX: returnDataType functionName (argumentDataType(s) argumentName(s))
	The compiler requires the function prototype so it has this information
	(argument(s) and return data types, and the function's name)	
	before the function is 'called'.
	The function prototypes are placed before main ().
	*/
	int welcome (void);
	
	char roundWeGo();
	char goGoSubstitution();
	char turnBackTime();
	char alohamora();

int main(){
	
	welcome ();
}
	
/*
 FUNCTION DEFINITIONS contain the operational code of the function
 SYNTAX: 
 returnDataType functionName (argumentDataType(s) argumentName(s)){
     DO STUFF
 }
 */


/*---------------WELCOME MENU---------------
	The following block of print statements are written 
	seperately in an attempt to make the code more readable*/
	
	int welcome (void){
	    int s;                 //declare an integer s which will store user selection
    	do{
    	printf("\n\nWelcome to Cipher Central! Encrypting and decrypting messages since '19.\n");
    	printf("Please make a selection (eg. 1<ENTER>):\n");  
    	printf("	1) Rotation cipher encryption\n");
    	printf("	2) Sunstitution cipher encryption\n");
    	printf("	3) Rotation cipher decryption\n");
    	printf("	4) Substitution cipher decryption\n");
    	printf("What shall it be?	");
    	
    	scanf("%d", &s);
    	
    	switch (s){
            case 1:	printf("\nAlright! Rotation Encryption, Here's your encrypted text:\n");
            		return roundWeGo ();				//Can a return value be a function?? Pretty sure. Do I want this. Just get skeleton done. 
            		break;
            
            case 2: printf("\nSubstitution Encryption, right on. \nYour text has been encrypted:\n");
            		return goGoSubstitution();			//Is the input type void? No. Because it needs to be passed our string of elements.
            		break;
            case 3: printf("\nSolving...\n				Rotation Decryption yeilded:\n");
            		return turnBackTime ();				//The key always has to be the same the way i was thinking about it...
            		break;									//Should there be a loop that shifts through rotation posibilities? Probably.
            													//How many different rotations are possible? Consider A, if we normalise the values so that A is 0
            													//25 other options. Implement an array as a condition in a loop. 
            													//Increment sequentially similar to examples seen before.
            case 4: printf("\nYou selected substitution decryption. \nA wizard has opened your message:\n");
            		return alohamora();					//This is going to be a substisution decription but haven't come up with how best to go about it yet.
            		break;								//Break statements mean the switch will exit once one of the cases has been executed.
            	
            default: printf("The action you chose (%d) isn't valid\n", s);
        	}	
	   }
	   while (s < 1 || s > 4);
   }



char roundWeGo(){
    return 1;       //test
}
	
char goGoSubstitution(){
    return 2;       //test
}

char turnBackTime(){
    return 3;       //test
}

char alohamora(){
    return 4;       //test
}
