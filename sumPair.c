#include<stdio.h>
int main(){
	int a[10],i,j,target,n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter your target value:");
	scanf("%d",&target);
	printf("Enter the values:");
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]);
	}
	
	int sum;
	for(i=0;i<=n-1;i++){
		for(j=i+1;j<n;j++){
			sum=a[i]+a[j];
			if(sum==target){
				printf("%d,%d",a[i],a[j]);
			}
			
		}
		
	}
}
