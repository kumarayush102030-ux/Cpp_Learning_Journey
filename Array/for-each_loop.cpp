#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v= {4,6,8,3,9};
   for(int el: v){//new array 'el' created and v is copied
    cout<<el<<" ";
   }
}    