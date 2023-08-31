#include<stdio.h>
int main(){
	int arr[20],i,n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int temp=arr[n-1];
	for(i=n-2;i>=0;i--){
		arr[i+1]=arr[i];
	}
	arr[0]=temp;
	printf("modified array=");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);	
	}
	
	
}
