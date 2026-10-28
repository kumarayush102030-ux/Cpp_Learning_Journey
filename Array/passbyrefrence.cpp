#include <iostream>
using namespace std;
void change(int y[]){//Receive address
    y[0]=20;
}
int main(){
    int x[]={6,5,3};
    change(x);//sends address of array instead of array
    cout<<x[0]<<endl;
} 