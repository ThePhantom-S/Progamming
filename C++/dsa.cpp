#include<iostream>
using namespace std;

int main() {
	/*string s1, s2;
	cin >> s1 >> s2;
	cout << s1 << " "  << s2 << "\n"; // This will not return more two first two words.
	*/
	//To get a sentence as a input use "getline()"
	string st;
	getline(cin, st);
	cout << st << "\n";

	return 0;
}
