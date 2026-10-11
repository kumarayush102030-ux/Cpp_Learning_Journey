#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Type array size: ";
    cin>>n;
    int mx=INT_MIN;
    int smx=INT_MIN;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Index "<<i<<":";
        cin>>arr[i]; 
        if(mx<arr[i])
        mx=arr[i];
    }
    cout<<"Max is: "<<mx;
    for(int j=0;j<n;j++){
        if(smx<arr[j]&&arr[j]!=mx)
        smx=arr[j];
    }
    cout<<"\nSecond largest: "<<smx;
    
}