#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int circle1x, circle1y, circle1r, circle2x, circle2y, circle2r;

    cout << "Please input the coordinates and radius of the first circle as (x, y, r)" << endl;
    cin >> circle1x >> circle1y >> circle1r;

    cout << "Please input the coordinates and radius of the second circle as (x, y, r)" << endl;
    cin >> circle2x >> circle2y >> circle2r;
    float distance = sqrt(pow(circle2x - circle1x, 2) + pow(circle2y - circle1y, 2));

    if(distance < circle1r + circle2r) {
        cout << "Two circles overlap" << endl;
    } else {
        cout << "Two circles do not overlap" << endl;
    }

    return 0;
}