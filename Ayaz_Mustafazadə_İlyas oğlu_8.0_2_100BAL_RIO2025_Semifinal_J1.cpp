#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

string competition_start_time(const string& start_time, int delay) {
    // Nəzərdə tutulan vaxtı saat və dəqiqələrə ayırırıq
    int ss, dd;
    char colon;
    stringstream(start_time) >> ss >> colon >> dd;

    // Yeni vaxtı hesablamaq
    int total_minutes = ss * 60 + dd + delay;

    // Saat və dəqiqə olaraq ayırırıq
    int new_ss = (total_minutes / 60) % 24;
    int new_dd = total_minutes % 60;

    // Yekun vaxtı ss:dd formatında qaytarırıq
    stringstream result;
    result << setw(2) << setfill('0') << new_ss << ":" << setw(2) << setfill('0') << new_dd;
    return result.str();
}

int main() {
    int t;
    cin >> t;  // Testlərin sayını alırıq
    cin.ignore();  // Yeni xətt simvolunu aradan qaldırırıq

    for (int i = 0; i < t; i++) {
        string start_time;
        int delay;
        cin >> start_time >> delay;

        // Hesablama və nəticəni çap edirik
        cout << competition_start_time(start_time, delay) << endl;
    }

    return 0;
}
