#include "palindrome.h"

testing = 1701;

/* return(true) or return(false) */


bool palindrome(char* x){
	char* forwards = x;
	char* backwards = x;
	int len = 0;
	while(*backwards != '\0'){
		backwards++;
		len++;
	}
	if(len == 0){
		/* printf("empty char*\n"); */
		return 0;
	}
	/* backwards is currently at '\0', need to fix that */
	backwards--;
	for(int i = 0; i < len/2; i++){
		if(*forwards != *backwards) {
			/* printf("not a palindrome\n"); */
			return 0;
		}
		backwards--;
		forwards++;
	}
/* the char array has an even number of characters */

/* the char array has an odd number of characters */

/* the string is empty */

/* if the program has made it this far, it's true */
/* printf("it's a palindrome\n"); */
return 1;
}

/*int main(int argc, char* argv[]){
	char* test = "raceecar";
	if(argc > 1){
		test = argv[1];
	}
	bool pal = palindrome(test);
	printf("%s%s\n", test, pal ? " is a palindrome" : " is not a palindrome");
	for(int i = 0; i < argc; i++){
		printf("%s\n", argv[i]);
	}
}*/


