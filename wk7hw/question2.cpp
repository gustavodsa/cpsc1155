#include <iostream>

using namespace std;

void SolveEquation(double a, double b, double c, double d, double e, double f, double& x, double& y, bool& isSolvable) {
    
    if((a*d) - (b*c) == 0) {
        cout << "The equation has no solution" << endl;
        isSolvable = false;
        return;
    } else {
        x = ((e*d) - (b*f)) / ((a*d) - (b*c));
        y = ((a*f) - (e*c)) / ((a*d) - (b*c));
        isSolvable = true;
        cout << "x: " << x << "\ny: " << y << endl;
        return;
    }

}

void IntersectionPoint(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4, double& x, double& y, bool& isParallel) {
    
    bool solution;
    
    double a = y1 - y2;
    double b = x1 - x2;
    double c = y3 - y4;
    double d = x3 - x4;
    double e = ((y1 - y2) * x1) - ((x1 - x2) * y1);
    double f = ((y3 - y4) * x3) - ((x3 - x4) * y3);
    
    SolveEquation(a, b, c, d, e, f, x, y, solution);

    if(solution) {
        cout << "The lines intersect" << endl;
        isParallel = false;
        return;
    } else {
        cout << "The lines are parallel" << endl;
        isParallel = true;
        return;
    }

}

int main() {

    double a, b, c, d, e, f, x, y;
    bool isSolvable;
    cout << "Please enter your inputs as (a b c d e f) separated by a space" << endl;
    cin >> a >> b >> c >> d >> e >> f;
    SolveEquation(a, b, c, d, e, f, x, y, isSolvable);
    
    double x1, y1, x2, y2, x3, y3, x4, y4;
    bool isParallel;
    cout << "Please enter your inputs as (x1 y1 x2 y2 x3 y3 x4 y4) separated by a space" << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    IntersectionPoint(x1, y1, x2, y2, x3, y3, x4, y4, x, y, isParallel);


}