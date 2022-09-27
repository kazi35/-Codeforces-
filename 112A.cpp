#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100];
int i,l,count=0;
gets(a);
gets(b);
l=strlen(a);
strlwr(a);
strlwr(b);
int c=strcmp(a,b);
if(c==0){
	printf("\n 0");
}	
else{
	for(i=0;i<l;i++){
		if(a[i]<b[i]){
			printf("\n -1");
			break;
		}
		if(a[i]>b[i]){
			printf("\n 1");
			break;	
		}
	}
}	
	
}
