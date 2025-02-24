#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

const int detect_if_palindrome(int& number1, int& number2){
	int n1 = number1, n2 = number2;
	int result = 0;
	for (int i2 = n1; i2 <= n2; i2++){
		result = n2 - i2 - 1;
		if (i2 % (n2 - n1) - 1 == 0){
			result++;
		}
//		cout <<"t: " << i2 <<endl;
		if (result % 3 == 0 && result < n2){
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
