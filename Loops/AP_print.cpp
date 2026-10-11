#include<iostream>
using namespace std;
int main() {
	int a;
	cout<<"Write first term of AP: ";
	cin>>a;
	int d;
	cout<<"write common difference: ";
	cin>>d;
	int n;
	cout<<"Number of terms you want: ";
	cin>>n;
	int l;
	l=a+(n-1)*d;
	for(int i=a; i<=l; i+=d) {
		cout<<i<<"  ";

	}


}