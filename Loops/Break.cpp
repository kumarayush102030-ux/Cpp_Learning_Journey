#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int i;
    for( i=1;t!=0;i++){
        t/=10;
        if(t==0){
            break;
        }
    }
    cout<<i;
}