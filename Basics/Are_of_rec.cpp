#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Type Length: ";
    cin>>x;
    int y;
    
    cout<<"Type breadth: ";
    cin>>y;
    if(x*y > 2*x+2*y) cout<<"Yes Area is greater"<<"Area is"<<x*y<<endl<<"Perimeter is"<<2*x+2*y;
    else cout<<"Area is not greateer";
}