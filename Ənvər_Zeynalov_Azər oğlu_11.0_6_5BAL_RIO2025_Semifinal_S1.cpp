#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	int c, l;
	cin >> c >> l;
	int numCheck = 0;
	int secCheck = 0;
	for (int i2 = c; i2 <= l; i2++){
		if (i2 < 10) {
			cout << "Palindrome!" << endl;
		}
		else{
			if (i2 % 5 == 0){
				cout << i2 << endl;
			}
			else{
				numCheck = i2 - (i2 - (i2 % 5));
				secCheck = i2 / 10;
				if (numCheck == secCheck){
					cout << "Palindrome!" << endl;
				}
				else{
					cout << i2 << endl;
				}
			}
		}
	}
	return 0;
}
