#include<iostream>
#include<cmath>
using namespace std;
int fact(int x){
    int fact = 1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    return fact;
     
}
int main(){
    int n,r;
    cout<<"Type n: ";
    cin>>n;
    cout<<"Type r: ";
    cin>>r;
    int l =fact(n)/(fact(r)*fact(n-r));
    cout<<"ncr: ";
    cout<< l;
}