#include<stdio.h>
int main(){
int n,k;
scanf("%d %d",&n,&k);
int nas[n];

for(int i=0;i<n;i++){
scanf("%d",&nas[i]);
}
int count=0;
for(int i=0;i<n;i++){
		if(nas[k-1]<=nas[i] && nas[i]>0){
		count++;
	}
}
	printf("%d",count);
	
	return 0;
}
