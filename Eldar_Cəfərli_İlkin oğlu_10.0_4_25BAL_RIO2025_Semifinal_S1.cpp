#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <iterator>
#include <cmath>
#include <cstdlib>

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
		if (length / 2 == 1) {
			if (i_first == i_second) {
				cout << "Palindrome!" << endl;
			} else {
				cout << i << endl;
			}
		} else {
		int i_second_reversed = 0;
		for (int j = 1; j < length / 2 + 1; j++) {
			int power_of_j = pow(10, j);
			int power_of_j_minus_one = pow(10, j-1);
		//	cout << power_of_j << " " << power_of_j_minus_one << endl;
		i_second_reversed += i_second % power_of_j / power_of_j_minus_one  * power_of_j;
		}
		//cout << i_second_reversed << endl;
		if (i_first == i_second_reversed) {
			cout << "Palindrome!" << endl;
		} else {
			cout << i << endl;
		}
		}
		}
	}
	return 0;
}
