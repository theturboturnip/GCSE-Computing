#include <stdio.h>
int get_gcd(int a,int b){
    int i=0;
    int m;
    if (a>b){
        m = b;
    }else{
        m = a;
    }
	for(i=m;i--;i>0){
		if (a%i==0&&b%i==0){
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
	
	
