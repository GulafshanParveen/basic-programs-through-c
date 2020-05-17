#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the numbers:");
	scanf("%d",&a);
	b=a%2;
	if(b==0){
		printf("even\n");
	}else{
		printf("odd\n");
	}
return 0;
}
