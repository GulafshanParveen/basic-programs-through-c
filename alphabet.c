#include<stdio.h>
int main(){
	char a;
	printf("Enter number of charater:");
	scanf("%c",&a);
	if(a>='a' && a<='z' || a>='A' && a<='Z'){
		printf("Alphabet\n");
	}else{
		printf("Number\n");
	}
return 0;
}
