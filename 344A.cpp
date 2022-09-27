#include<stdio.h>
int main()
{
	int n,i,count=0;
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(ar[i]!=ar[i+1]){
			count++;
		}
	}
	printf("%d",count+1);
	
	return 0;
}
