#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
	char stringToAnalyse[256];
	char* letterToAnalyse;
	int strLength;
	int aNo;
	int eNo;
	int iNo;
	int oNo;
	int uNo;
	int otherNo;
	int i;
	printf("Welcome to the vowel finder v1.0!\n");
	while(1==1)
	{
		aNo=0;
		eNo=0;
		iNo=0;
		oNo=0;
		uNo=0;
		printf("Please input a string to analyse\nString: ");
		//printf("1");
		scanf("%c",stringToAnalyse);
		strLength=strlen(stringToAnalyse);
		for(i=1;i<=strLength;i++)
		{
			if(i>strLength)
			{
				break;
			}
			printf("No problem here!");
			letterToAnalyse[0]=stringToAnalyse[i];
			if(strcmp(letterToAnalyse,"a")!=0||strcmp(letterToAnalyse,"A")!=0)
			{
				aNo++;
			}else if(strcmp(letterToAnalyse,"e")!=0||strcmp(letterToAnalyse,"E")!=0)
			{
				eNo++;
			}else if(strcmp(letterToAnalyse,"i")!=0||strcmp(letterToAnalyse,"I")!=0)
			{
				iNo++;
			}else if(strcmp(letterToAnalyse,"o")!=0||strcmp(letterToAnalyse,"O")!=0)
			{
				oNo++;
			}else if(strcmp(letterToAnalyse,"u")!=0||strcmp(letterToAnalyse,"U")!=0)
			{	
				uNo++;
			}
			otherNo=strLength-(aNo+eNo+iNo+oNo+uNo);
			printf("Number of a(s):%d\nNumber of e(s):%d\nNumber of i(s):%d\nNumber of o(s):%d\nNumber of u(s):%d\nNumber of other letter(s):%d\n",aNo,eNo,iNo,oNo,uNo,otherNo);
			
		}
	}
	return 0;
}