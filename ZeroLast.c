#include<stdio.h>
int main(){
	int a[10],n,i,j;
	printf("Enter number of values:");
	scanf("%d",&n);
	printf("Enter values:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int nonZeroValue=0;
	for(i=0;i<n;i++){
		if(a[i]!=0){
		a[nonZeroValue]=a[i];
		nonZeroValue++;
	}
	}
	
    //to fill non zero values with zero
	while(nonZeroValue<n){
		a[nonZeroValue]=0;
		nonZeroValue++;
	}
	printf("Modified Array...\n");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	
	
}
