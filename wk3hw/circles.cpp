#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float radius, area, perimeter;

    cout << "Input the circle radius: ";
    cin >> radius;

    area = M_PI * pow(radius, 2);
    perimeter = 2 * M_PI * radius;

    cout << "Circle's area: " << area << "units" << endl;
    cout << "Circle's perimeter: " << perimeter << "units" << endl;
    
    return 0;

}
