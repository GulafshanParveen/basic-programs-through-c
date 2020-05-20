#include<stdio.h>
int main(){
	int a,b,min;
	printf("Enter the number:");
	scanf("%d %d",&a,&b);
	min=(a>b) ? a:b;
	while(1){
		if(min%a==0 && min%b==0){
		printf("LCM of %d and %d=%d\n",a,b,min);
		break;
	}
	min++;
	}
return 0;
}
