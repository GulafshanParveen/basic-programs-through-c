#include<stdio.h>
int main(){
	int i,sum=0,a;
	printf("Enter natural numbers:");
	scanf("%d",&a);
	for(i=1;i<=a;++i){
		sum+=i;
	}
	printf("Sum of natural numbers:%d\n",sum);
return 0;
}

