#include <iostream>

using namespace std;
string solve(string a, long long h){
    h %= (60*24);

    int hours = ((int)(a[1]-48) + (int)(a[0]-48)*10);
    int minutes = ((int)(a[4]-48) + (int)(a[3]-48)*10);
    int ex_hours = (h/60);
    int ex_minutes = h%60;
    ex_minutes += minutes;
    ex_hours += hours;
    
    ex_hours += (ex_minutes/60);
    ex_hours%=24;
    ex_minutes %= 60;
    string ans = "00:00";
    ans[0] = (char)((ex_hours/10)+48);
    ans[1] = (char)((ex_hours%10)+48);
    ans[3] = (char)((ex_minutes/10)+48);
    ans[4] = (char)((ex_minutes%10)+48);
    return ans;
}
int main()
{
    int t;
    cin >> t;
    string* a = new string[t];
    long long* b = new long long[t];
    string* ans = new string [t];
    for(int i = 0; i < t; i++){
        cin >> a[i] >> b[i];
        ans[i] = solve(a[i], b[i]);
    }
    for(int i = 0; i < t; i++){
        cout << ans[i] << endl;
    }
    return 0;
}

