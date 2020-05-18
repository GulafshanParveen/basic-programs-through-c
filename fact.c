#include<stdio.h>
int main(){
	unsigned long long fact=1,i,num;
	printf("Enter the number:");
	scanf("%llu",&num);
	for(i=1;i<=num;i++){
		fact*=i;
	}
	printf("Factorial=%llu\n",fact);
return 0;
}
