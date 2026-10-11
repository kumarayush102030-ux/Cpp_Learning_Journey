#include <iostream>
using namespace std;
void com( int& x, int& y){
    x= x+y -(y=x);
    
}
int main(){
    int x,y;
    cout<<"Type first: ";
    cin>>x;
    cout<<"Type second: ";
    cin>>y;
    com(x,y);
    cout<<"Value of x:"<<x<<endl<<"Value of y:"<<y;

}