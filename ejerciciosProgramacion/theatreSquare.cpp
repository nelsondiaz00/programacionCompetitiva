// https://codeforces.com/problemset/problem/1/A

#include <iostream>
#include <math.h>
using namespace std;
 
 
int main()
{
	double n, m, a;
	unsigned long long areaTotal;
 
	cin >> n >> m >> a;
 
	areaTotal = ceil(m / a) * ceil(n / a);
	cout << areaTotal;
 
}
