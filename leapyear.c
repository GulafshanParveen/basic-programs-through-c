#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the number to check whether leap year or not:");
	scanf("%d",&a);
	if(b=a%4){
		printf("not leap year\n");
	}else{
		printf("Leap year\n");
	}
	return 0;
}
