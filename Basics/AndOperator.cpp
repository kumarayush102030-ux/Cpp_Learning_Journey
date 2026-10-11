#include<iostream>
using namespace std;
void change(int* ptr){
    *ptr = 20;
}
int main(){
    int x=4;
    cout<<x<<endl;
    change(&x);
    cout<<x;
}