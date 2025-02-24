#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <iterator>

using namespace std;

int main() {
	long long l;
	int r;
	cin >> l >> r;
	for (int i = l; i <= r; i++) {
		if (i < 10) {
			cout << "Palindrome!" << endl;
		} else {
			int temp = i;
		int length = 0;
		while (temp > 0) {
			temp /= 10;
			length++;
		}
		int i_first = i / (10 * (length / 2));
		int i_second = i % (10 * (length / 2));
		if (i_first == i_second) {
			cout << "Palindrome!" << endl;
		} else {
			cout << i << endl;
		}
		}
	}
	return 0;
}
