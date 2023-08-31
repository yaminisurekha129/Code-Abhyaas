#include<stdio.h>
int main(){
	int arr[20],i,n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int max=-10;
	int max1;
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max1=max;
			max=arr[i];
			
		}
		
		
	}
	printf("second largest element=%d",max1);
}
