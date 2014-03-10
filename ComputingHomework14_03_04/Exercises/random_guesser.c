#include <stdio.h>
#include <time.h>


int main(){
    srand(time(NULL));
	int number,guessed_number;
	number=rand()%50;
	while (1){
        printf("Guess a number!: ");
		scanf("%d",&guessed_number);
		if (guessed_number<number) printf("Too low!\n");
		else if (guessed_number>number) printf("Too high!\n");
		else if (guessed_number==number) {
			printf("Just right!\n");
			return 0;
		}
	}
	return 0;
}
