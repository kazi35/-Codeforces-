#include<stdio.h>
int main()
{
int k,n,w,i,sum=0,v;
scanf("%d %d %d",&k,&n,&w);
for(i=1;i<=w;i++)
{
	sum=sum+i;
}
v=k*sum;
if(n>v){
	printf(" 0");
}
else{
	printf("%d",(v-n));
}

	return 0;
}
