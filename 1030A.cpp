#include<stdio.h>
int main()
{
	int n,t,i,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&t);
		if(t==1){
		c++;
		}
	}
	if(c>=1){
		printf("\n HARD");
	}
	else{
			printf("\n EASY");
	}
	return 0;
}
