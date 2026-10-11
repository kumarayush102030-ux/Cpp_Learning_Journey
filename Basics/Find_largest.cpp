#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Type First Number: ";
    cin>>a;
    cout<<"Type Second Number: ";
    cin>>b;
    cout<<"Type Third Number: ";
    cin>>c;
    if(a>b && a>c) cout<<a<<" is Largest";
    if(b>a && b>c) cout<<b<<" is Lagest";
    else cout<<c<<" is Largest";
}