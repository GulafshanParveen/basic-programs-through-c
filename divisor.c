#include<stdio.h>
int main(){
	int divisor,dividend,quotient,remainder;
	printf("Enter number:");
	scanf("%d%d",&dividend,&divisor);
	quotient=dividend/divisor;
	remainder=dividend-divisor*quotient;
	printf("quotient:%d and remainder:%d\n",quotient,remainder);
return 0;
}
