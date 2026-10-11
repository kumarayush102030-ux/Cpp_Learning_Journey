#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Type a Number: ";
   cin>>n;
   if(n<0)
   n=-n;
   int l=0;
   while(n!=0){
       
       l=l+n%10;
       n/=10;
       
       
       
   }
   cout<<"The sum of Digits is: ";
   cout<<l;
}