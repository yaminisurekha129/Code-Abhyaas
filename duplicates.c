//removing duplicates
#include<stdio.h>
int main(){
	int arr[20],n,j;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int i=0;
	j=1;
	while(j<n)
	{
		if(arr[i]==arr[j])
		j++;
		else {
		i++;
		arr[i]=arr[j];
		j++;
	}
	}
	
	printf("unique array= ");
	for(int k=0;k<=i;k++){
		printf("%d",arr[k]);
	}
}
