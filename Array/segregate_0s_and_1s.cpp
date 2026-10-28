#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={0,0,1,1,0,1,0};
    int a= arr.size(); int one=0,zero=0;
    for(int i=0;i<a;i++){
        if(arr[i]==0) zero++;
        else one++; 
    }
    int k= zero;
    //cout<<zero<<" "<<one;
    for(int j=0;j<zero;j++){
        arr[j]=0;

    } 
    while(k<=a-1){
        arr[k]=1;
        k++;

    } for(int el: arr) cout<<el<<" ";
}