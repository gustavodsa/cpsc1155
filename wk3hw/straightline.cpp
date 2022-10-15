#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double x1, y1, x2, y2, distance;

    cout << "Input the points coordinates as (x1, y1) (x2, y2): ";
    cin >> x1 >> y1 >> x2 >> y2;

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "The distance between the points: (" << x1 << ", " << y1 << ") (" << x2 << ", " << y2 << ") is " << distance;
    
    
    return 0;

}
