#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define array_length 10000
int organize(int* organized){
	int i,storage;
	for(i=0;i<array_length;i++){
		if(organized[i]>organized[i+1]){
			storage=organized[i];
			organized[i]=organized[i+1];
			organized[i+1]=storage;
			return 0;
		}
	}
	return 1;
}
int main(){
    int unorganized[array_length],organized[array_length];
	srand(time(NULL));
	int isOrganized=0,i;
    for(i=0;i<10;i++){
        unorganized[i]=rand()%array_length;
        organized[i]=unorganized[i];
    }
    while(organize(organized)==0){}    

}
