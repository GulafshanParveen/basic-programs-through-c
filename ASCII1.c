#include<stdio.h>
int main(){
	char s;
	printf("Enter character:");
	scanf("%c",&s);
	if('a'==97 && 'z'==122 && 'A'==65 && 'Z'==90){
		printf("ASCII:%d\n",s);
	}
return 0;
}
