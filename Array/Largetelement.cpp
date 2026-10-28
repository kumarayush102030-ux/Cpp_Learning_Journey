#include<iostream>
#include<climits> //for INT_MIN
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: "; cin>>n;
   int arr[n];
   int lar=INT_MIN; // minimum value in integer INT_MIN
   int mx=INT_MAX;
   long mul=1;
   for(int i=0;i<=n-1;i++){
    cout<<"Value for index "<<i<<": ";
    cin>>arr[i];
    if(lar<arr[i])
    lar=arr[i];
    if(mx>arr[i]) mx=arr[i];
   } 
   cout<<"Largest value is: "<<lar; 
   cout<<"\nMinimum value is: "<<mx; 
} 
