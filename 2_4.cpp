#include <iostream>
using namespace std;

int main() {
	int n;					
	cin >> n;
	for(int i=n; i>=1;i-=2){
		for(int j=1;j<=i/2;j++){
			cout << " ";
		}
		for(int k=1;k<=(n+1)-i;k++){
			cout << "*";
		}	
		cout << endl;
	}
	return 0;
}
