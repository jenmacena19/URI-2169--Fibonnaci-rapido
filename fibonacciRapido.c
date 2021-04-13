#include <stdio.h>

int main(){
	double fibo;
	int n; 
	
	scanf("%i", &n );
	fibo = ((pow(((1 + sqrt(5))/2),n) - pow(((1 - sqrt(5))/2),n))) / sqrt(5);
	printf("%.1f\n",fibo);
	
	return 0;	
}
