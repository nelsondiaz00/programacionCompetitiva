#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> vec;
	int t;
	int x, y;
	cin >> t;
	int n, a, holder1, holder2, flag;
	
	for (int i = 0; i < t; i++) {
		x = 1, y = 1;
		flag = 1;
		cin >> n;
		
		for (int j = 0; j < n; j++) {
			cin >> a;
			vec.push_back(a);
			if (j == 0) {
				holder1 = a;
			} else if (vec[j] != holder1) {
				flag = 0;	
			} else if (flag == 1 && vec[j] == holder1) {
				x++;
			}
		}

		// revisa desde atras
		holder2 = vec[n-1];
		for (int j = n-2; j > 0; j--) {
			if (x == n) break;
			else if (holder2 != vec[j]) break;
			else y++;
		}

		if (x == n) cout << 0 << '\n';
		else if (holder1 == holder2) cout << (n - (x + y)) << '\n';
		else if (x > y) cout << (n - x) << '\n';
		else cout << (n - y) << '\n';
		
		vec.clear();
	}

	return 0;
}



//1 1 9 8 1 1 1 1