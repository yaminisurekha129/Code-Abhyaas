//reverse of a string
#include<stdio.h>
int revOfString(int arr[],int start,int end){
	int temp;
	while(start<=end){
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
		
	}
}
int main(){
	int n,arr[10],i;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter elements in array:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	revOfString(arr,0,n-1);
	printf("Reverse of the string: ");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
		
	}
	
}
