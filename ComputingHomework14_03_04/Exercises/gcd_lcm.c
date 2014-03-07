#include <stdio.h>
int get_gcd(int a,int b){
	for(i=a*b;i--;i>0){
		if (i%a==0&&i%b==0){
			printf("GCD: %d\n",i);
			return i;
		}
	}
	return 0;
}

int main(){
	int a,b;
	printf("First number: ");
	scanf("%d", &a);
	printf("Second number: ");
	scanf("%d", &b);
	int i=0;
	int gcd=get_gcd(a,b);
	int lcm=(a*b)/gcd;
	printf("LCM: %d\n", lcm);
	return 0;
}
	
	