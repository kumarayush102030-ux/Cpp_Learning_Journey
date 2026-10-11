#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   if(n<0)
   n=-n;
   int l=0;
   while(n!=0){
       
       l=l+n%10;
       n/=10;
       
       
       
   }
   cout<<l;
}