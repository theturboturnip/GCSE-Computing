#include <stdlib.h>
#include <stdio.h>
int findHighestPower(int number,int base)
{
	int i=1;
	while(i<number)
	{
		i*=base;
	}
	if (number<i)
	{
		i/=base;
	}
	return i;
}
int convertNum(int number,int base)
{
	int numberOf=0;
	int i;
	int highestPower=0;
	if (base==1)
	{
		for(i=0;i<number;i++)
		{
			printf("I");
		}
	}else if (base!=1){
		highestPower=findHighestPower(number,base);
		while(highestPower>0)
		{
			printf("%d",number/highestPower);
			number=number%highestPower;
			highestPower/=base;
		}
	}
	printf("\n");
	return 0;
}
int main()
{
	int base;
	int number;
	int i=1;
	while(i==1)
	{
		printf("Please input the desired base. It must be between 10 and 1.\nBase:");
		scanf("%d",&base);
		if (base>10)
		{
			base=10;
		}else if(base<1)
		{
			base=1;
		}
		printf("Base input as: %d\nPlease input the number you wish to convert from base 10.\nNumber:",base);
		scanf("%d",&number);
		convertNum(number,base);
	}
	return 0;
}