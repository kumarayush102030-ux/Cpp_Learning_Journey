#include<iostream>
using namespace std;
int x;
int main(){
    int x;
    int* pt= &x;//pointer datatype store address
    cout<<pt<<"  ";
    cout<<&x;//print address of variable
    cout<<endl<<&::x;//Scope resolution operator access global var
}// datatype* variable -- pointer