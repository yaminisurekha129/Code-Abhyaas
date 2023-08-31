#include<stdio.h>
int rearrange(int arr[],int len){
	int pos_element=0;
	int neg_element=1;
	int i,arr1[20];
	for(i=0;i<len*2;i++){
		if(arr[i]>=0){
			arr1[pos_element]=arr[i];
			pos_element=pos_element+2;
		}
		else{
			arr1[neg_element]=arr[i];
			neg_element=neg_element+2;
		}
	}
	for(i=0;i<len*2;i++){
		printf("%d,",arr1[i]);
		
	}
	
}

int main(){
	int arr[10],i,n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	rearrange(arr,n);
	return 0;
}
