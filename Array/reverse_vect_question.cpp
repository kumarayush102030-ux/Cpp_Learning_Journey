#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v= {10,20,30,40,50,60,70,80};
    int a=v.size()-1;
    for(int i=0;i<(v.size())/2;i++){
        v[i]=(v[i]+v[a])-(v[a]=v[i]);
        a--;
    }
    for(int el: v) cout<<el<<" ";
}