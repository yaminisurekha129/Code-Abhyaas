//left shift elements by k positions
#include<stdio.h>

int rev(int a[20],int start,int end){
		while(start<=end){
			int temp=a[start];
			a[start]=a[end];
			a[end]=a[start];
			start++;
			end--;	
		}
		return a;
}
int main(){
	int n,arr[20],pos,i;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter number of positions:");
	scanf("%d",&pos);
	rev(&arr,0,pos-1);
	rev(&arr,pos,n-1);
	rev(&arr,0,n-1);
	printf("After left shifting by %d positions:",pos);
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}	
}
