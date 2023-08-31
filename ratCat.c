//find which cat is nearer to rat
#include<stdio.h>
#include<stdlib.h>
int main(){
	int cat1,cat2,rat;
	printf("Enter the cat1 position:");
	scanf("%d",&cat1);
	printf("Enter the cat2 position:");
	scanf("%d",&cat2);
	printf("Enter the position of rat:");
	scanf("%d",&rat);
	if(rat-cat1==rat-cat2){
		printf("both are at same distance to rat");
    }
    int dis_cat1=abs(rat-cat1);
    int dis_cat2=abs(rat-cat2);
	/*if(cat1==cat2){
		printf("rat life saved");
	}*/
	if((dis_cat1)<(dis_cat2)){
		printf("cat1 is nearer");
	}
	else if((dis_cat1)>(dis_cat2)){
		printf("cat2 is nearer");
	}

}
