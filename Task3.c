//Sir Faisal ask you to write a program which can help him in storing your quiz marks.
// For pass students within range [5-10] will be stored
//consider there are 10 students registered in Section BAI-1B. He wants an array of same size where marks.
//For failed students within range [0-5] are stored.
//You program should exit if user enters -1 and will display the marks entered along with average of each array.
#include <stdio.h>
int main(){
	float pass[10], fail[10];
	float marks;
	int count=0, p, f, i;
	int pcount=0, fcount = 0;
	float avg_f, avg_p, sum_p,sum_f;
	
	
	for(i=0 ; i<10; i++)
	{
		printf("Enter marks\nEnter -1 to stop\n");
		scanf("%f", &marks);
		
		if (marks >= 5 && marks<=10)
		{
			pass[pcount]= marks;
			pcount++;		
		}
		else if(marks<5 && marks >=0)
		{
			fail[fcount]= marks;
			fcount = fcount + 1;
		}
		else if (marks != -1)
		{
			printf("Invalid Marks entered");
		}
		else
		{
			break;
		}
		}
		
	for (p=0; p<(pcount); p++ ){
	
		printf("Marks of Passing students are pass[%d]= %f\n", p, pass[p] );
		sum_p = sum_p + pass[p];
    }
    avg_p = sum_p/pcount;
    printf("The average of passing students is: %f\n", avg_p);
    
	for (f=0; f<(fcount); f++ ){
	
		printf("Marks of failed students are fail[%d]= %f\n", f, fail[f] );
		sum_f = sum_f + fail[f];
    }
    avg_f = sum_f/fcount;
    printf("The average of failing students is: %f\n", avg_f);
    
    

	return 0;
}
