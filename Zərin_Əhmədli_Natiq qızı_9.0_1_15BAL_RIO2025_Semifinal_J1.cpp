#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        string time_str;
        int delay;
        cin >> time_str >> delay;
        
        
        int hours = stoi(time_str.substr(0, 2));
        int minutes = stoi(time_str.substr(3, 2));
        
      
        minutes += delay; 
        
        hours += minutes / 60;  
        
        hours = hours % 24; 
        
        
        cout << setw(2) << setfill('0') << hours << ":"
             << setw(2) << setfill('0') << minutes << endl;
    }
    
    return 0;
}
