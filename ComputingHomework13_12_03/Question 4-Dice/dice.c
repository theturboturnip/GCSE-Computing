#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int rollDie(int numOfSides){
    //sleep(1);
    return (rand()%numOfSides)+1;
}
int main(void){
    srand(time(NULL));
    int numOfDies,numOfSides,i;
    while(1){
        printf("How many dice?\nDice:");
        scanf("%d",&numOfDies);
        printf("How many sides on the die/dice?\nSides:");
        scanf("%d",&numOfSides);
        for(i=0;i<numOfDies;i++){
            printf("%d ",rollDie(numOfSides));
        }
        printf("\n");
    }
    return 0;
}
