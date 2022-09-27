#include<stdio.h>
int main(){
int x;
scanf("%d",&x);
int r,n=0;
r=x/5;
if(x%5==0){
	n=r;
}
else{
	n=r+1;
}
printf("%d",n);	
	return 0;
}
