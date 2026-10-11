#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Type a Number: ";
   cin>>n;
   if(n<0)
   n=-n;
   int a;
   int l=0;
   while(n!=0){
       a=n%10;
       
       l=l*10+a;
       n/=10;
       
       
       
   }
   cout<<"The Reverse Digits is: ";
   cout<<l;
   
}