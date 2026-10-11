#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Type a Number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n;k++){
            if((i+k)>n)
            cout<<"* ";
            else
            cout<<"# ";
        }cout<<endl;
    }
}