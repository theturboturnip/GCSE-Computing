#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
int numberToOne(int number){
	if (number>0)
	{
		return 1;
	}
	return 0;
}
int checkCharacter(char character)
{
	if(character >= 'a' && character <= 'z'){
		return 0;
    }else if(character >= 'A' && character <= 'Z'){
        return 1;        
    }
    else if(character >= 48 && character <= 57){
        return 2;        
    }
    return 3;
}

void checkPassword(char *password, int *returnList)
{
	int passLength = strlen(password);
	int lowers=0;
	int uppers=0;
	int numbers=0;
	int other=0;
	int charClass=0;
	int a;
	for(a=0;a<passLength;a++)
	{
		charClass=checkCharacter(password[a]);
		if (charClass==0){
			lowers++;
		}
		if (charClass==1){
			uppers++;
		}
		if (charClass==2){
			numbers++;
		}
		if (charClass==3){
			other++;
		}
	}
	returnList[0] = passLength;
	returnList[1] = lowers;
	returnList[2] = uppers;
	returnList[3] = numbers;
	returnList[4] = other;
}

int confirmPassword(char *password){
	char secondPassword[20];
	int i=1;
	while(i==1)
	{
		printf("\nPlease confirm your password.\nPassword:");
		scanf("%s",secondPassword);
		if (strcmp(password,secondPassword)==0)
		{
			printf("Thank you! Your password is now %s.\n",password);
			exit(4);
		}
		else{
			printf("Oops? you got your password wrong!");
		}
	}
	return 0;
}
		
extern int main( int argc, char **argv )
{
	char password[12];
	int passwordData[5];
	int containsUpper;
	int containsLower;
	int containsNumber;	
	int differentCharacters;
	int i=1;
	while(i==1){
		printf("Please input your password.\nPassword:");
		scanf("%s",password);
		checkPassword(password,passwordData);
		containsUpper=passwordData[1];
		containsLower=passwordData[2];
		containsNumber=passwordData[3];					
		containsUpper=numberToOne(containsUpper);
		containsLower=numberToOne(containsLower);
		containsNumber=numberToOne(containsNumber);
		differentCharacters=containsUpper+containsLower+containsNumber;
		if((passwordData[0]<=12) && (passwordData[0]>=6))
		{
			//password length is 'just right'
			if(passwordData[4]==0)
			{
				//password contains no bad characters
				if(differentCharacters==1)
				{
					printf("Your password is WEAK");
				}
				if(differentCharacters==2)
				{
					printf("Your password is MEDIUM");
				}
				if(differentCharacters==3)
				{
					printf("Your password is STRONG");
				}
				confirmPassword(password);
			}
			else
			{
				printf("Only letters and numbers are allowed!");
			}
		}
		else
		{
			if(passwordData[0]<6)
			{
				printf("Your password is too short!");
			}
			else
			{
				printf("Your password is too long!");
			}
		printf(" It needs to be between 6 and 12 characters long.\n");
		}
	}
	return 0;
}