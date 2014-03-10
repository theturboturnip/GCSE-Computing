#include <stdio.h>

int main(){
	int father,son=0;
	printf("father birthdate?: ");
	scanf("%d",&father);
    printf("son birthdate?: ");
	scanf("%d",&son);
    father=son-father;
    son = father;
    father *= 2;
	printf("The son will be %d years old and the father will be %d years old\n when the father is twice as old as the son.\n",son,father);
	return 0;
}
