#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int rect1x, rect1y, rect2x, rect2y;
    float rect1h, rect1w, rect2h, rect2w;

    cout << "Input rectangle 1 coordinates, height and width as (x, y, h, w)" << endl;
    cin >> rect1x >> rect1y >> rect1h >> rect1w;

    cout << "Input rectangle 2 coordinates, height and width as (x, y, h, w)" << endl;
    cin >> rect2x >> rect2y >> rect2h >> rect2w;

    /* To easily visualize rectangles positioning calculate top and bottom left coordinates of rectangles */
    float r1topLeftX = abs(rect1x) - rect1w / 2.0;
    float r1topLeftY = abs(rect1y) + rect1h / 2.0;
    float r1BottomRightX = abs(rect1x) + rect1w / 2.0;
    float r1BottomRightY = abs(rect1y) - rect1h / 2.0;
    float r2topLeftX = abs(rect2x) - rect2w / 2.0;
    float r2topLeftY = abs(rect2y) + rect2h / 2.0;
    float r2BottomRightX = abs(rect2x) + rect2w / 2.0;
    float r2BottomRightY = abs(rect2y) - rect2h / 2.0;

    /* Check for rectangle's corners positions compared to second rectangle */
    /* Iff all conditions match that means rectangles are overlapping */

    if(r1topLeftX < r2BottomRightX && r1BottomRightX > r2topLeftX && r1topLeftY > r2BottomRightY && r1BottomRightY < r2topLeftY) {
        cout << "Two rectangles overlap";
    } else {
        cout << "Two rectangles do not overlap";
    }

    return 0;

    /* 
    
    There are multiple ways to solve this question
    This is another solution for checking if rectangles are overlapping:

    //Calculate distances between rectangles center in x and y
    double distanceX = sqrt(pow(rect2x - rect1x, 2)); 
    double distanceY = sqrt(pow(rect2y - rect1y, 2));

    //Calculate maximum width and height (in between rectangles)
    double maxWidth = (rect1w + rect2w) / 2;
    double maxHeight = (rect1h + rect2h) / 2;

    //Compare distance to the maximum widht and height
    //If distance is less than width and height that means rectangles overlap
    if(distanceX < maxWidth && distanceY < maxHeight) {
        cout << "Two rectangles overlap" << endl;
    } else {
        cout << "Two rectangles do not overlap" << endl;
    }
    
    */
    
}