/* A. Dislike of Threes
Polycarp doesn't like integers that are divisible by 3
 or end with the digit 3
 in their decimal representation. Integers that meet both conditions are disliked by Polycarp, too.

Polycarp starts to write out the positive (greater than 0
) integers which he likes: 1,2,4,5,7,8,10,11,14,16,…
. Output the k
-th element of this sequence (the elements are numbered from 1
).

Input
The first line contains one integer t
 (1≤t≤100
) — the number of test cases. Then t
 test cases follow.

Each test case consists of one line containing one integer k
 (1≤k≤1000
).

Output
For each test case, output in a separate line one integer x
 — the k
-th element of the sequence that was written out by Polycarp.
*/



#include <iostream>
#include <string>
using namespace std;

int main()
{

	int n;
	int i;
	int numberSequence;
	string end;
	int testCase;


	cin >> testCase;


	for (size_t j = 0; j < testCase; j++){


		cin >> numberSequence;

		i = 0;
		n = 0;
		while (true) {
			end = std::to_string(i);

			if (i % 3 != 0 && end[end.size() - 1] != '3') {

				n++;
			}

			if (n == numberSequence) {
				cout << i;
				break;
			}

			i++;
		}
		cout << endl;
	}



}
