#include <iostream>
using namespace std;

int main() {
    long long int numSec;
    long long int numDays;
    long long int numHours;
    long long int numMin;
    const int DAY_SEC = 86400;
    const int HOUR_SEC = 3600;
    const int MIN_SEC = 60;
    
    // input prompt
    cout << "Enter seconds" << endl;
    cin >> numSec;
    cout << "Total seconds: " << numSec << endl;
    cout << endl;
    
    if(numSec > 0) {
        
        // Calculations days
        numDays = numSec / DAY_SEC;
        numSec = numSec - (numDays * DAY_SEC);
        if (numDays > 0) {
            cout << numDays << " day(s)" << endl;
        }
        
        // Calculations hours
        numHours = numSec / HOUR_SEC;
        numSec = numSec - (numHours * HOUR_SEC);
        if (numHours > 0) {
            cout << numHours << " hour(s)" << endl;
        }
        
        // Calculations min
        numMin = numSec / MIN_SEC;
        numSec = numSec - (numMin * MIN_SEC);
        if (numMin > 0) {
            cout << numMin << " minute(s)" << endl;
        }
        
        // Seconds output
        if (numSec > 0) {
            cout << numSec << " second(s)" << endl;
        }
        
    }
    
    else {
        cout << "Total seconds must be greater than zero" << endl;
    }

    return 0;
}
