//You are assisting your English language teacher who wants to analyze how many vowels and consonants appear in students’ submitted words.
//Write a program that reads a single word using scanf(&quot;%s&quot;, str); and counts the number of vowels and consonants in it without using any string library functions like strlen().
//The program should display both counts on the screen.
#include <stdio.h>
int main(){
	char string[1000];
	int v_count, c_count, i;
	i=0, c_count=0, v_count=0;
	
	printf("Enter string:\n");
	scanf("%s", string);
	
	while(string[i] != '\0'){
		if ((string[i]>='a' && string[i] <='z') || (string[i]>='A' && string[i]<= 'Z'))
		{
			if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
			{
				v_count ++;
			}
			else
			{
				c_count++;
			}
		}
	i++;
}
	printf("Vowels in the given string are: %d\nConsonants in the given string are: %d\n", v_count, c_count);
	return 0;
}
