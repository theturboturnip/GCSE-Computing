#include <stdio.h>
#include <time.h>


int main(){
    srand(time(NULL));
	int number,guessed_number;
	number=rand()
	while (1){
		scanf("%d",&guessed_number);
		if (guessed_number<number) printf("Too low!");
		else if (guessed_number>number) printf("Too high!");
		else if (guessed_number==number) {
			printf("Just right!");
			return 0;
		}
	}
	return 0;
	
}