#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(7);
    cout<<v.size()<<" "<<v.capacity()<<"\n";
    v.push_back(5);
    cout<<"\n"<<v.size()<<" "<<v.capacity();
}