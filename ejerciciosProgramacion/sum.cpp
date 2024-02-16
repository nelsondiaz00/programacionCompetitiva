/*A. Sum

time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output


You are given three integers a
, b
, and c
. Determine if one of them is the sum of the other two.

Input
The first line contains a single integer t
 (1≤t≤9261
) — the number of test cases.

The description of each test case consists of three integers a
, b
, c
 (0≤a,b,c≤20
).

Output
For each test case, output "YES" if one of the numbers is the sum of the other two, and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).*/

#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c;

    cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		cin >> a >> b >> c;

		if ( b + c == a ||  a + c == b ||  a + b == c) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}
