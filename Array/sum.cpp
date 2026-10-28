#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: "; cin>>n;
   int arr[n];
   int sum=0;
   long mul=1;
   for(int i=0;i<=n-1;i++){
    cout<<"Value for index "<<i<<": ";
    cin>>arr[i];
    sum+=arr[i];
    mul*=arr[i];
   } cout<<"Sum is: "<<sum; cout<<"\nMultiply is: "<<mul;
} 