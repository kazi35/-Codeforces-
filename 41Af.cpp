#include <stdio.h>
#include<string.h>
int main()
{
char n[20],m[20],c=0,temp;
scanf("%s",&n);int i,j,l2;
int l=strlen(n);
scanf("%s",&m);
l2=strlen(m);
for(int i=0;j=(l-1);i<l/2;i++,j–){


temp=n[i];
n[i]=n[j];
n[j]=temp;

}
if(l==l2){
for(i=0;i<l;i++)
}
if(m[i]==n[i]){

c++;
}
if(c==l){

printf("YES\n");
}
else{

printf("NO\n");c=0;
}

