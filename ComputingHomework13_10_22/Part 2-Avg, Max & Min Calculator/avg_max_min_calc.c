#include <stdlib.h>
#include <stdio.h>
int main()
{
	int n;
	float avg;
	int max;
	int min;
	int currentNo;
	int i=0;
	printf("Welcome to the Avg, Max & Min calculator v1.0!\n");
	while(1==1)
	{
		printf("How many numbers will you be inputting?\nNo. of numbers:");
		scanf("%d",&n);
		printf("Thank you. Please input the numbers.\nNumber 1:");
		scanf("%d",&currentNo);
		avg=currentNo;
		max=currentNo;
		min=currentNo;
		for(i=1;i++;i!=n)
		{
			if(i>n)
			{
				break;
			}
			printf("Number %d:",i);
			scanf("%d",&currentNo);
			avg+=(float)currentNo;
			if(currentNo>max)
			{
				max=currentNo;
			}else if(currentNo<min){
				min=currentNo;
			}
		}
		avg/=(float)n;
		printf("Average:%f\nMaximum number:%d\nMinimum Number:%d\n",avg,max,min);
	}
	return 0;
}		