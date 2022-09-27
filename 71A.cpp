#include<stdio.h>
#include<string.h>
int main(){
int n,i,l;
scanf("%d",&n);
char bl[101];
for(i=0;i<n;i++){
	scanf("%s",&bl);
	l=strlen(bl);
	if(l>10){
		printf("\n %c%d%c",bl[0],l-2,bl[l-1]);
	}
	else{
	
	printf("\n %s",bl);
    }
}
		return 0;
}

