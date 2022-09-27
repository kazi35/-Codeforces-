#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int nas[n];
float sum=0,r=0;
for(int i=0;i<n;i++){
	scanf("%d",&nas[i]);
	sum=sum+nas[i];
}
  r=sum/n;
printf("%f",r);	
	return 0;
}

