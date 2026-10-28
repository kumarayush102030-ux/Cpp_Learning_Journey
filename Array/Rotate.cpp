#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> &v, int i, int j){
    while(i<j){
        swap(v[i],v[j]);
        i++;
        j--;
    }
}

int main(){
    vector<int> v= {1,2,3,4,5,6,7};
    int a=v.size()-1; int k; cout<<" Type no.: "; cin>>k;
    k=k%(a+1); 
    change(v,0,a);
    change(v,0,k-1);
    change(v,k,a);
    // for(int i=0;i<(v.size())/2;i++){
    //     v[i]=(v[i]+v[a])-(v[a]=v[i]);
    //     a--;
    // } 
    // int b=v.size()-1;

    //     for(int j=k; j<(v.size()+k)/2; j++){
    //     v[j] = (v[j] + v[b]) - (v[b] = v[j]); 
    //     b--;
    // }

    for(int el: v) cout<<el<<" ";
}