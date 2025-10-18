//Write a program that reads the 10 numbers from user and store these numbers into an array of same size.
//You program should provide a searching mechanism in such a way that how many times a particular number
//occurred and then print it on screen. If number is not in array, then program should display a message
//“number not found”.
#include <stdio.h>
int main(){
	int number[10];
	int num,i,j, search_value, count;
	count = 0;
	
	for(i=0; i<10; i++){
		printf("Enter number:\n");
		scanf("%d", &num);
		number[i]= num;	}	
		
	printf("Enter the value to search\n");
	scanf("%d", &search_value);
	
	for(j=0; j<10; j++){
		if(number[j] == search_value){
			count = count +1;	}}
			
	if(count == 0){
		printf("Number not found\n");	
	}else{
		printf("%d number is entered %d times\n",search_value, count);
	}	
	
	
	return 0;
}
