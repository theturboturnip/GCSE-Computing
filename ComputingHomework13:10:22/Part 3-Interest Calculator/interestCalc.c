#include <stdlib.h>
#include <stdio.h>
int main()
{
	int i=0;
	float capital;
	float roi;
	int years;
	float interest;
	printf("Welcome to the interest calculator v1.0!\n");
	while(1==1)
	{
		printf("What is your capital?\nCapital in pence:");
		scanf("%f",&capital);
		capital/=100;
		printf("What is your ROI(Rate Of Interest)?\nROI:");
		scanf("%f",&roi);
		printf("How long will this banking simulation go on for?\nYears:");
		scanf("%d",&years);
		for(i=1;i++;i!=years+1)
		{
			if(i>years+1)
			{
				break;
			}
			//capital = floorf(capital * 100 + 0.5) / 100;
			interest=((float)capital*roi)/100;
			//interest = floorf(interest * 100 + 0.5) / 100;
			printf("Year:%d Interest:%.2f",i-1,interest);
			capital+=interest;
			printf(" Sum:%.2f\n",capital);
		}
		printf("All done!\nPlease note that the pence values might not be entirely accurate,\nbecause of the way the pence value is rounded.\n");
	}
	return 0;
}		