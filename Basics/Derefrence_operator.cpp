#include<iostream>
using namespace std;

int main(){
    int x= 4;
    int* p1= &x;
    int** p2 =&p1;  // Double pointer
    cout<<&x<<" "<<p1<<" "<<p2<<endl;
     cout<<*p1<<endl<<**p2;//Derefrence Operator
}