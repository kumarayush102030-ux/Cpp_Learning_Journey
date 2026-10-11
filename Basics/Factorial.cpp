#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Type a Number: ";
    cin>>n;
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact*=i;


    }
    cout<<"Factorial: "<<fact;
}