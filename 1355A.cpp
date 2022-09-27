#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int a[t];
	for(int i=0;i<t;i++){
		scanf("%d",& a[i]);
		if(a[i]==1||a[i]==2){
			printf(" 0 \n");
			
		}
		else{
				printf("%d",((a[i]-1)/2));
		}
	}
	
	
	
}
