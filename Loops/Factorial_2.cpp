#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Type a Number: ";
   cin>>n;
   if(n<0)
   n=-n;
   long long fact =1;
   for(int i=2;i<=n;i++){
       fact *=i;
       
   }
   
   cout<<"Factorial of Number: "<<fact;
   
}