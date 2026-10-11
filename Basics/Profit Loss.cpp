#include<iostream>
using namespace std;
int main(){
    cout<<"Cost Price: ";
    int x;
    cin>>x;
    cout<<"Selling Price: ";
    int y;
    cin>>y;
    if(y>x) cout<<" heyy.. Made Profit: "<<y-x;
    else cout<<"Not Good.. Made Loss: ";
    if(y-x < 0) cout<<-(y-x);
    
    
}