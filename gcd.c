#include<stdio.h>
int main(){
	int i,a,b,gcd;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	for(i=1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0) gcd=i;
	}
	printf("GCD value of %d and %d =%d\n",a,b,gcd);
return 0;
}
