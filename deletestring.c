#include<stdio.h>
#include<string.h>
int main(){
	int i,j,l;
	char s[100],a;
	gets(s);
	scanf("%c",&a);
	l=strlen(s);
	for(i=0;i<l;i++){
		if(s[i] == a)
		{
			for(j = i; j < l; j++)
			{
				s[j] = s[j + 1];
			}
			l--;
			i--;	
		} 
	}
	printf("after deleting string is:%s",s);
return 0;
}
