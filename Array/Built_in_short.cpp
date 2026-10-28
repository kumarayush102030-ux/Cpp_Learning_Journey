#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v= {4,6,8,3,9};
    sort(v.begin(),v.end());//arrange in ascending
    reverse(v.begin(),v.end());//revese array
   for(int el: v){//new array 'el' created and v is copied
    cout<<el<<" ";
   }
}    