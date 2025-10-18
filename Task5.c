//Write a program that reads 10 integers into an array.
//Finds and prints the difference (max - min) between the largest and smallest elements.
#include <stdio.h>
int main(){
	int number[10];
	int num, i, j, max, min, difference;
	
	for(i=0; i<10; i++)
	{
		printf("Enter number:\n");
		scanf("%d", &num);
		number[i]= num;	
	}
	
	max = number[0];
	min = number[0];
	
	for (j =1; j<10; j++)
	{
		if(max < number[j])
		{
			max = number[j];	
		}
		if(min> number[j])
		{
			min = number[j];
		}	
	}
	difference = max-min;
	printf("The difference of %d and %d is %d", max, min, difference);
	
	return 0;
}

