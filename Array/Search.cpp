#include<iostream>
using namespace std;
int main(){
    int arr[]={22,66,32,34,33,69,23};
    int n;
    cout<<"Type a No. to search: ";
    cin>>n;
    int yes=0;
    for(int i=0;i<size(arr);i++){
        if(n==arr[i])
        yes++;
    }
    if(yes>0)
    cout<<"Yes! Number is there";
    else
    cout<<" No! not foumd.";
}