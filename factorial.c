//Factorial of a given number
#include<stdio.h>
int main(){
	int n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	int r=1;
	for(i=1;i<=n;i++){
		r=r*i;
	}
	printf("factorial of given number %d is %d:",n,r);
	
}
