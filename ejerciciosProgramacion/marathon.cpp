/* A. Marathon
You are given four distinct integers a
, b
, c
, d
.

Timur and three other people are running a marathon. The value a
 is the distance that Timur has run and b
, c
, d
 correspond to the distances the other three participants ran.

Output the number of participants in front of Timur.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The description of each test case consists of four distinct integers a
, b
, c
, d
 (0≤a,b,c,d≤104
).

Output
For each test case, output a single integer — the number of participants in front of Timur.*/


#include <iostream>
using namespace std;

int main()
{
	int n, a, b, c, d;
	int count = 0;

	cin >> n;


	for (size_t i = 0; i < n; i++)
	{
		cin >> a;
		cin >> b;
		cin >> c;
		cin >> d;

		if (a < b) count++;
		if (a < c) count++;
		if (a < d) count++;


		cout << count << endl;
		count = 0;
	}


}
