/*A. Lucky?
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
A ticket is a string consisting of six digits. A ticket is considered lucky if the sum of the first three digits is equal to the sum of the last three digits. Given a ticket, output if it is lucky or not. Note that a ticket can have leading zeroes.

Input
The first line of the input contains an integer t
 (1≤t≤103
) — the number of testcases.

The description of each test consists of one line containing one string consisting of six digits.

Output
Output t
 lines, each of which contains the answer to the corresponding test case. Output "YES" if the given ticket is lucky, and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).*/

#include <iostream>
using namespace std;

int main (){

	int n = 0, primeraParte, segundaParte;
	string ticket;
	cin >> n;

	for (int i = 0; i < n; i++){
	     	cin >> ticket;
		primeraParte = (ticket[0] - '0') + (ticket[1]- '0') + (ticket[2]- '0');
		segundaParte = (ticket[3] - '0') + (ticket[4]- '0') + (ticket[5]- '0');

		if (primeraParte == segundaParte) cout << "YES" <<endl;
		else cout << "NO" <<endl;

	}

return 0;
}
