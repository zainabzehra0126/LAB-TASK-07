//Write a program that reads a string using scanf("%[^A-Za-z]", str); so that it accepts and stores all characters except alphabets.
//The program should then display the entered non-alphabetic characters on the screen.
#include <stdio.h>
int main(){
	char str[200];
	
	printf("Enter a string:\n");
	scanf("%[^A-Za-z]", str);
	
	printf("The non-alphabetic characters are:\n%s\n", str);
	
	return 0;
}
