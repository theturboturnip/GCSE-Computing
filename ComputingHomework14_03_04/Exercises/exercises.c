#include <stdio.h>

int main(){
	int father,son=0;
	printf("When the son was 0, how old was the father?: ");
	scanf("%d",&father);
	while(son*2!=father){
		son++;
		father++;
	}
	printf("The son will be %d years old and the father will be %d years old\n when the father is twice as old as the son.",&son,&father);
	return 0;
}
