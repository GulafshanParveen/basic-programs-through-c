#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,discriminant,real,imag,root1,root2;
	printf("Enter value of a,b and c:");
	scanf("%lf %lf %lf",&a,&b,&c);
	discriminant=b*b-4*a*c;
	if(discriminant>0){
		root1=(-b+sqrt(discriminant)) / 2*a;
		root2=(-b-sqrt(discriminant)) / 2*a;
		printf("root1=%.2lf and root2=%.2lf",root1,root2);
	}else if(discriminant==0){
		root1=root2=-b/2*a;
		printf("root1=%.2lf",root1);
	}else{
	real=-b/2*a;
	imag=sqrt(-discriminant)/2*a;
	printf("root1=%.2lf+%.2lfi and root2=%.2f-%.2fi",real,imag,real,imag);
	}
return 0;
}
