#include <bits/stdc++.h>
using namespace std;

int n, sum;
int main() {
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		sum += x;
	}
	
	if (sum == 0) {
		cout << "divide by zero";
		return 0;
	}
	
	cout << "1.00";
}
