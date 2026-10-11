#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Type a Number: ";
    cin>>n;
    int a,r=0;
    while(n!=0){
        a=n%10;
        r=r*10+a;
        n=n/10;

        
    }
    cout<<r;
}