#include<stdio.h>
int main(){
	int i,next,t=0,t1=1,a;
	printf("Enter number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		next=t+t1;
		t=t1;
		t1=next;
	printf(" %d\n",t);
	}
return 0;
}
