#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double distance, efficiency, fuelprice, cost;

    cout << "Cost of driving: " << endl;
    cout << "What is the distance to your destination (in kilometers): ";
    cin >> distance;
    cout << "What is the fuel efficiency of your vehicle (in kilometers/litre): ";
    cin >> efficiency;
    cout << "What is the fuel price: ";
    cin >> fuelprice;

    cost = distance / efficiency * fuelprice;

    cout << "Cost of driving is: $" << cost << endl;
    
    return 0;
}
