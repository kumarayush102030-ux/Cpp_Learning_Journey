#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(5,2);//Dynamic array or vector
    //arr(size,default value)//syntax
    for(int i=0;i<arr.size();i++){//instead of size(arr)
        cout<<arr[i]<<" ";
    }cout<<endl;
    arr.push_back(5);//this adds new element in arr
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    arr.pop_back();//removes last element
    cout<<"\n"<<"Size of arr: " <<arr.size();
} 