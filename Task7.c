//You are working in a data management department where you are asked to remove duplicate entries from a list of recorded IDs.
//Write a program that takes 10 integers from the user and stores them in an array.
//The program should replace every duplicate element (after its first occurrence) with -1 to mark it as a duplicate
//display the final updated array on the screen.
//Example: Input ? 2 3 5 3 5 9 1 2 8 1 ? Output ? 2 3 5 -1 -1 9 1 -1 8 -1
#include <stdio.h>
int main(){
	int num[100]={0};
	int user_num[10];
	int number, i, j;
	
	for (i=0; i<10; i++){
		printf("Enter number\n");
		scanf("%d", &number);
				
		if (num[number-1]==1){
			user_num[i]=-1;
		}else{
			num[number-1]= 1;
			user_num[i]=number;
		}
	}
	
	for(j=0; j<10; j++){
		printf("number[%d] = %d\n", j, user_num[j] );
	}
	
	
	return 0;
}
