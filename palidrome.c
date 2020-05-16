#include<stdio.h> include<string.h>
int main(){
	int i,l,flag=0;
	char s[8];
	scanf("%s\n",&s[0]);
	l=strlen(s);
	for(i=0;i<l;i++){
		if(s[i]!=s[i-l-1]){
		flag=1;
		break;
		}
	}
	if(flag){
		printf(" not palidrome",s);
		}else{
		printf("palidrome",s);
	}
return 0;
}
