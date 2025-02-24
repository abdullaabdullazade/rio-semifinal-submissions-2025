#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string planned_time;
        long long d;
        cin >> planned_time >> d;


        int hours, minutes;
        sscanf(planned_time.c_str(), "%d:%d", &hours, &minutes);


        long long total_minutes = hours * 60 + minutes + d;


        int new_hours = (total_minutes / 60) % 24;
        int new_minutes = total_minutes % 60;

        printf("%02d:%02d\n", new_hours, new_minutes);
    }

    return 0;
}
