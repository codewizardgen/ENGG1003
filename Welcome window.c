#include<stdio.h>
	

int main(){
	
	/*---------------WELCOME WINDOW---------------
	The following block of print statements are written seperately in an attempt to make the code more readable*/
	printf("Welcome to Cipher Central! Encrypting and decrypting messages since '19.\n");
	printf("Please enter the letter corresponding to your desired action (eg. a<ENTER>):\n");  
	printf("	a) Rotation cipher encryption");
	printf("	b) Sunstitution cipher encryption");
	printf("	c) Rotation cipher decryption");
	printf("	d) Substitution cipher decryption");
	printf("What shall it be?	");
	
	scanf("%c", &selection);
												//NOTE TO SELF: Replace stupid names before due. Prob should just use proper from start but eh.
												//Should be informative and easily interpreted by the reader
	switch action (char selection){
		case a:	printf("Alright! Rotation Encryption, Here's your encrypted text:\n");
				return roundWeGo ();				//Can a return value be a function?? Pretty sure. Do I want this. Just get skeleton done. 
				break;

		case b: printf("Substitution Encryption, right on. Your text has been encrypted:\n");
				return GoGoSubstitution();			//Is the input type void? No. Because it needs to be passed our string of elements.
				break;
		case c: printf("Solving...\n				Rotation Decryption yeilded:\n");
				return turnBackTime ();				//The key always has to be the same the way i was thinking about it...
				break;									//Should there be a loop that shifts through rotation posibilities? Probably.
													//How many different rotations are possible? Consider A, if we normalise the values so that A is 0
													//25 other options. Implement an array as a condition in a loop. 
													//Increment sequentially similar to examples seen before.
		case d: printf("You selected substitution decryption. A wizard has made a key to open your message:\n");
				return alohamora();					//This is going to be a substisution decription but haven't come up with how best to go about it yet.
				break;								//Break statements mean the switch will exit once one of the cases has been executed.
	/*TRY THE MANDRAKE :/ I mean mandelbrot set? (Maybe you can make some sweet input/output screens? Prob too much work. Just do the task!)*/

		default: printf("The action you chose (%c) isn't valid", selection);	
	}	
}

