#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

const int detect_if_palindrome(int& number1, int& number2){
	int n1 = number1, n2 = number2;
	int result = 0;
	int numCheck = 0;
	for (int i2 = n1; i2 <= n2; i2++){
		numCheck = i2 / 10;
		if (i2 < 10 || i2 % (numCheck + 1)) {
			cout << "Palindrome!" << endl;
		}
		else{
			cout << i2 << endl;
		}
	}
	return 0;
}

int main(){
	int c, l;
	cin >> c >> l;
	detect_if_palindrome(c, l);
	return 0;
}
