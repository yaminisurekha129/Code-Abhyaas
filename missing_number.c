//find missing number in an array
#include<stdio.h>
int main(){
	int n,i;
	printf("Enter number of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements:");
	for(i=0;i<n-1;i++){
		scanf("%d",&arr[i]);
	}
	int sum=(n*(n+1))/2;
	//intf("%d",sum);
	int sum1=0;
	for(i=0;i<n-1;i++){
		sum1+=arr[i];
	}
	//intf("%d",sum1);
	printf("missing element=%d",sum-sum1);	
}
