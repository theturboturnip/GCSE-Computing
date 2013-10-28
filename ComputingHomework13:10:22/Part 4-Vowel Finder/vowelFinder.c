#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
	char stringToAnalyse[256];
	char letterToAnalyse;
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
		scanf("%s",stringToAnalyse);
		//fprintf(stderr,"1");
		strLength=strlen(stringToAnalyse);
		for(i=1;i<=strLength;i++)
		{
			if(i>strLength)
			{
				break;
			}
			//fprintf(stderr,"No problem here!");
			letterToAnalyse=stringToAnalyse[i-1];
			if((letterToAnalyse=='a')||(letterToAnalyse=='A'))
			{
				aNo++;
			}else if((letterToAnalyse=='e')||(letterToAnalyse=='E'))
			{
				eNo++;
			}else if((letterToAnalyse=='i')||(letterToAnalyse=='I'))			
			{
				iNo++;
			}else if((letterToAnalyse=='o')||(letterToAnalyse=='O'))
			{
				oNo++;
			}else if((letterToAnalyse=='u')||(letterToAnalyse=='U'))
			{	
				uNo++;
			}
		}
		otherNo=strLength-(aNo+eNo+iNo+oNo+uNo);
		printf("Number of a(s):%d\nNumber of e(s):%d\nNumber of i(s):%d\nNumber of o(s):%d\nNumber of u(s):%d\nNumber of other letter(s):%d\n",aNo,eNo,iNo,oNo,uNo,otherNo);
		aNo*=(100/strLength);
		eNo*=(100/strLength);
		iNo*=(100/strLength);
		oNo*=(100/strLength);
		uNo*=(100/strLength);
		otherNo*=(100/strLength);
		printf("a %d%%\ne %d%%\ni %d%%\no %d%%\nu %d%%\nother %d%%\n",aNo,eNo,iNo,oNo,uNo,otherNo);
	}
	return 0;
}