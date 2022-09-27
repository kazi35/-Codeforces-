#include<bits/stdc++.h>

using namespace std;

int main()
{
   int l,count=0,i; 
 
 string n; 
 
 cin>>n; 
 
 l=n.length(); 
 
 sort(n.begin(),n.end()); 
 
 for (i = 1;i<l; i++)
{
    if (n[i] != n[i-1] ) 
 
   {
        count++;
   } 
 
 }
    if((count+1)%2==0) 
 
 {
        cout<<"CHAT WITH HER!"<<endl;
    } 
 
 else 
 
 {
        cout<<"IGNORE HIM!"<<endl;
    } 
 
 return 0; 
 
 } 
