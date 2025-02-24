#include <bits/stdc++.h>

using namespace std;

int main() {
 int t;
 cin >> t;

 while(t--) {
 int h, m, d;
 char colon;
if (!(cin >> h >> colon >> m >> d) || colon != ':'){
        cerr << "Invalid input format" << endl;
return 1;
}

m+= d;
h = (h + m / 60) % 24;
m%= 60;

cout << setw(2) << setfill('0') << h << ":" << setw(2) << setfill('0') << m << endl;

 }
 return 0;
}
