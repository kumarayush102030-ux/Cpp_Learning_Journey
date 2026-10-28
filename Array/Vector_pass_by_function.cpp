#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> &v){
    v[2]=520;
}
int main(){
    vector<int> k= {4,6,8,3,9};
   change(k);
   cout<<k[2];
   
}    