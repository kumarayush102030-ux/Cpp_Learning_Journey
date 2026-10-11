#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"Type column no: ";
	cin>>n;
	int f;
	cout<<"Type Row no: ";
	cin>>f;
	for(int j=1; j<=f; j++) {
		if(j%2==0) {
			for(int i=1; i<=n; i++) {
				cout<<char(64+j)<<" ";
			}
		}
		else
			for(int i=1; i<=n; i++) {
				cout<<char(96+j)<<" ";
			}

		cout<<endl;
	}
}