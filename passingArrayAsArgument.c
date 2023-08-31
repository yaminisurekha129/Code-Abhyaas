#include<stdio.h>
int add(int b[],int len)
{
	int sum=0,i;
	for(i=0;i<len;i++){
		sum+=b[i];
	}
	return sum;
}
int main(){
	int a[5],n,i;
	printf("Enter number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the elements %d:",i);
	    scanf("%d",&a[i]);
	}
	int len = sizeof(a)/sizeof(a[0]);
	printf("%d",add(a,len));
	return 0;
}
