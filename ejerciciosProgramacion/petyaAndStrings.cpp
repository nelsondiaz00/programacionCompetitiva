/*A. Petya and Strings
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". N*/

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cctype>
using namespace std;

int main(){

	string firstString;
	string secondString;
	bool flag = 0;

	cin >> firstString;
	cin >> secondString;


	for(int i = 0; i < firstString.size(); i++){
	   firstString[i] = tolower(firstString[i]);
	   secondString[i] = tolower(secondString[i]);
        if(firstString[i] < secondString[i]){
            cout << -1 ;
            flag = 0;
            break;
        }else if(firstString[i] > secondString[i]){
            cout << 1 ;
            flag = 0;
            break;
        }else {
            flag = 1;
        }
	}

	if (flag) cout<<0;
}
