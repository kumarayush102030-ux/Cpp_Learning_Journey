#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> num={2,7,11,15};
    int target; cout<<"Type target value: ";
    cin>>target;
    int a= num.size(); vector<int> k(2,0);
    int i,j;
    for( i=0; i<a;i++){
        for( j=0;j<a;j++){
            if(i==j) continue;
            else if (num[i]+num[j]==target){
                k[0]=i;
                k[1]=j;
            }
        }
    }
    for(int el: k) cout<<el<<" ";
}
