#include<stdio.h>
int main(){
	int a[20],i,j,n,temp;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			
		}
	}
	printf("Array after sorting:");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
		
	}
}
