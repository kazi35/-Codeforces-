#include<stdio.h>
#include<string.h>
int main(){
	int i,n;
	scanf("%d",&n);
	char a[n],b[n];
	for(i=0;i<n;i++){
		scanf("%s %s",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		a[i]=tolower(a[i]);
		b[i]=tolower(b[i]);
	}
	
	
	
	return 0;
}
