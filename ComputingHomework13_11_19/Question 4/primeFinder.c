#include <stdio.h> 
 
int find_prime(float x) {  
	float divisor=x-1;
	float divided;
	while(divisor>1){
		divided=x/divisor;
		if(divided-(int)divided==0){
			return 0;
		}
		divisor--;
	}
	return 1;
}  
 
int main(void) { 
   	float x;
   	int isPrime;
   	printf("Welcome to the prime finder!\nAccurate from -32767 to 32767, this is the best for all of your prime-finding needs!\n"); 
   	while(1){
   		printf("Please input a number\nNumber:");
   		scanf("%f",&x);
   		isPrime=find_prime(x);
  		printf("That number is ");
  		if(isPrime==0){
  			printf("not ");
  		}
  		printf("prime!\n");
   	}
  	return 0;  
} 