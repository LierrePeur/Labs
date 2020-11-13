#include <iostream>
using namespace std;


int main() {
	int n, s=0,k=1, z=1, p=1;
	cin >> n;
	for (int i=1; i<=n; i++){
		k=i*2;
		for (int j=i;j<=k;j++){
			p=p*j;
		}
		s=s+p;
		p=1;
	}
	cout << s;
	return 0;
}
