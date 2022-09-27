#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char x[n];
	scanf("%s",x);
	int coa=0,cod=0;
	for(int i=0;i<n;i++){
		if(x[i]=='A'){
			coa++;
		}
		else{
			cod++;
		}
	}
	if(coa>cod){
		printf("\n Anton");
	}
	else if(coa<cod){
			printf("\n Danik");
	}
	else{
			printf("\n Friendship");
	}
	
	
}
