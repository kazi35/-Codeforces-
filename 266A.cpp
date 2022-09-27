#include<stdio.h>
#include<string.h>
int main()
{
 int n;
 scanf("%d",&n);
 char a[n];
 scanf("%s",&a);
 int i,c=0;
 for(i=0;i<n;i++){
 	if(a[i]==a[i+1]){
 		c++;
	 }
 }
	printf("\n %d",c);
	
	
	
}
