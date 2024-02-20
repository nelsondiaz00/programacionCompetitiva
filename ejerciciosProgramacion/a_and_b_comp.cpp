#include <iostream>
using namespace std;

int main() {
	int n, holder;
	int count1 = 0, count2 = 0, count3 = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> holder;
		count1 += holder;
	}

	for (int i = 0; i < n-1; i++) {
		cin >> holder;
		count2 += holder;
	}

	for (int i = 0; i < n-2; i++) {
		cin >> holder;
		count3 += holder;
	}

	cout << count1 - count2 << '\n';
	cout << count2 - count3 << '\n';
	

	return 0;
}