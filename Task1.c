//Write a C program that takes 5 integers in an array and shifts all elements one position to the right, and
//moves the last element to the first position.
//Example:
//Input ? 1 2 3 4 5
//Output ? 5 1 2 3 4
#include <stdio.h>
int main(){
	int number[5];
	int num,i,j;

	for(i=0; i<5; i++){
		printf("Enter number:\n");
		scanf("%d", &num);
		number[i]= num;

	}
	for(j = 4; j>=0; j--){
		printf("number[%d] = %d\n",j, number[j]);
	}
	return 0;
}
