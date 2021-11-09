#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double EARTH_GRAVITY = 9.81;
    const double MOON_GRAVITY = 1.62;
    const double VENUS_GRAVITY = 8.87;
    double mass;
    double earthWeight;
    double moonWeight;
    double venusWeight;
    
    // input of object mass
    cout << "Enter the mass in kg" << endl;
    cin >> mass;
    cout << "The mass is " << fixed << setprecision(4) << mass << " kg" << endl;
    
    if(mass > 0) {
       
        // convert kg to newtons
        earthWeight = mass * EARTH_GRAVITY;
        moonWeight = mass * MOON_GRAVITY;
        venusWeight = mass * VENUS_GRAVITY;
    
        // output
        cout << setw(8) << left << "Location";
        cout << setw(14) << right << "Weight (N)" << endl;
        
        cout << setw(8) << left << "Earth";
        cout << setw(14) << right << earthWeight << endl;
        
        cout << setw(8) << left << "Moon";
        cout << setw(14) << right << moonWeight << endl;
        
        cout << setw(8) << left << "Venus";
        cout << setw(14) << right << venusWeight << endl;
        
        // light or heavy weight if statement
        if(earthWeight >= 1500) {
            cout << "The object is heavy" << endl;
        }
        
        if(earthWeight <= 5) {
            cout << "The object is light" << endl;
        }
        
    }
    
    // invalid input
    else {
        cout << "The mass must be greater than zero" << endl;
    }
    
    return 0;
    
}
