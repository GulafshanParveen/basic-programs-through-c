#include<stdio.h>
int main(){
	int i,a,num;
	printf("Enter table number:");
	scanf("%d",&a);
	for(i=1;i<=10;i++){
		num=a*i;
	printf("Table of %d : %d\n",a,num);
	}
return 0;
}
