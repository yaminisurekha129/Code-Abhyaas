//Whether a given number is prime or not
#include<stdio.h>
int main(){
	int num,a,i;
	int count =0;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if(num%i==0){
			count++;
		}
    }
    if(count==2){
    	printf("Prime number.");
	}
	else{
		printf("Not a Prime number");
	}
}
