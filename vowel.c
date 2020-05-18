#include<stdio.h>
int main(){
	char s;
	printf("Enterthe character:");
	scanf("%c",&s);
	if(s=='a' || s=='e' || s=='i' || s=='o' ||s=='u' || s=='A' || s=='E' || s=='I' || s=='O' || s=='U'){
		printf("vowel\n");
	}else{
	printf("consonent\n");
	}
return 0;
}
