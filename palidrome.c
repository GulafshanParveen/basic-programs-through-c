#include<stdio.h> include<string.h>
int main(){
	int i,l,flag;
	char s[8];
	scanf("%s\n",&s[0]);
	l=strlen(s);
	for(i=0;i<l;i++){
		if(s[i]!=s[l-1]){
		flag=1;
		break;
		}
	}
	if(flag=1){
		printf("palidrome");
		}else{
		printf("not palidrime");
	}
return 0;
}
