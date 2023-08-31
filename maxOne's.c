//Count maximum consequtive one's
#include<stdio.h>
int main(){
	int n,arr[100],i;	
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("enter elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int count=0;
	int max1=0;
	int max2;
	for(i=0;i<n;i++){
		if(arr[i]==1){
		count=count+1;
		if(count>max1){
			max1=count;
		}
	}
	else{
		count=0;
	}
	if(max1>max2){
		max2=max1;
	}
	}
		printf("max consequtive one's=%d",max2);
}
