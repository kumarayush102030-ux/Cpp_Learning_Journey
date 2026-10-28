#include <iostream>
using namespace std;
int main(){
    int arr[7];//Static allocation
    int* brr= new int[7];//Dynamic allocation
    brr[0]=4;//this also makes array with different way
    cout<<brr[0];
}