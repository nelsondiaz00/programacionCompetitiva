/*A. Chewbaсca and Number
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.

Input
The first line contains a single integer x (1 ≤ x ≤ 1018) — the number that Luke Skywalker gave to Chewbacca.

Output
Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.

*/

#include <iostream>

using namespace std;

int main()
{
    string num, final;
    char a;
    int n;
    cin >> num;

    a = num[0];

    if (a == '9'){

         cout << a ;
    }else {

        n = a - '0';
        if (n >= 5  ) {
            n = 9 - n;
        }
        cout << n ;
    }

    for (int i = 1; i < num.size(); i++ ){
        a = num[i];
        n = a - '0';
        if (n >= 5  ) {
            n = 9 - n;
        }
        cout << n ;
    }
}
