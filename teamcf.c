#include<stdio.h>
int main()
{
	int n,a,b,c,s=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&a,&b,&c);
		
		if(a+b+c>=2)
		{
			s++;
		}
		
	}
	printf("%d",s);

	return 0;
}
