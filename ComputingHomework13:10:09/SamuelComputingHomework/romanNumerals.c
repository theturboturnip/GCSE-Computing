#include <stdlib.h>
#include <stdio.h>

int conversion( int number )
{
	while (number>0)
	{
		while (number>=1000) 
		{
			number -= 1000;
			printf("M");
		}
		while (number>=900)
		{
			number -= 900;
			printf("CM");
		}
		while (number>=500)
		{
			number -= 500;
			printf("D");
		}
		while (number>=400)
		{
			number -= 400;
			printf("CD");
		}

		while (number>=100) 
		{
			number -= 100;
			printf("C");
		}
		while (number>=90)
		{
			number -= 90;
			printf("XC");
		}
		while (number>=50)
		{
			number -= 50;
			printf("L");
		}
		while (number>=40)
		{
			number -= 40;
			printf("XL");
		}
		while (number>=10)
		{
			number -= 10;
			printf("X");
		}
		while (number>=9)
		{
			number -= 9;
			printf("IX");
		}
		while (number>=5)
		{
			number -= 5;
			printf("V");
		}
		while (number>=4)
		{
			number -= 4;
			printf("IV");
		}
		while (number>=1)
		{
			number--;
			printf("I");
		}
	}
	return 0;
}
extern int main( int argc, char **argv )
{
	int inputNumber;
	int countingNumber=100;
	printf("Welcome to the roman numeral generator! Please type in a number to begin.\n");
	while (scanf("%d",&inputNumber)==1)
	{
		if (inputNumber!=0)
		{
			printf("%d=",inputNumber);
			conversion(inputNumber);
			printf("\n");
		}
		else
		{
			printf("You input 0. Here comes a list of numerals, starting from 100:");
			while (countingNumber>0)
			{
				printf("\n%d=",countingNumber);
				conversion(countingNumber);
				printf("");
				countingNumber--;
			}
			printf("\nThere you go!\n");
		}	
	}
	return 0;
}
