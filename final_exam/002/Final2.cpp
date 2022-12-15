/**
CPSC1155 sec 2 – 202230
Instructor: Muntaseer Salahuddin
Final Exam Problem 2
Total Points (for this problem): 30
Total Time (for all problems): 75 minutes

•	Place all your code inside this CPP file
•	submit your completed CPP file (one file) through appropriate link on D2L
•	Please submit earlier than the end time to make sure you have an answer uploaded
o	Once submission link is closed it will be the end of this segment of the test
o	You can submit as many times as you want as long as it is before the deadline
o	Only LAST Submission will be kept

 * 
 */

#include <iostream>

using namespace std;

int SegmentSum(unsigned int arr[3][3], int sr, int sc, int er, int ec);
int SegmentMax(unsigned int arr[3][3], int sr, int sc, int er, int ec);

int main(){
/*
BEWARE
the content of the following array is just a sample. Your program may be tested
with different content. However, the array will always be of dimensions 3x3.
*/
    const int rows = 3;
    const int columns = 3;
    unsigned int arr[rows][columns] = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << SegmentSum(arr, 0, 0, 1, 1) << endl; // output: 12
    cout << SegmentSum(arr, 0, 0, 0, 0) << endl; // output: 1
    cout << SegmentSum(arr, 0, 0, 1, 2) << endl; // output: 21
    cout << SegmentSum(arr, 0, 0, 2, 1) << endl; // output: 27
    cout << SegmentSum(arr, -1, 0, 1, 2) << endl; // output: -1
    cout << SegmentSum(arr, 0, 3, 1, 2) << endl; // output: -1
    cout << SegmentSum(arr, 1, 2, 0, 2) << endl; // output: -1
    cout << SegmentSum(arr, 1, 2, 1, 3) << endl; // output: -1

    cout << "SegmentMax Tests: " << endl;
    cout << SegmentMax(arr, 0, 0, 1, 1)  << endl; // returns 5 (Maximum of all values that fall within the sub-rectangle that starts at row 0, column 0 and ends at row 1, column 1. The values that fall here are (1,2,4,5))
    cout << SegmentMax(arr, 0, 0, 0, 0)  << endl; // returns 1 (Maximum of all values that fall within the sub-rectangle that starts at row 0, column 0 and ends at row 0, column 0. The values that fall here are (1))
    cout << SegmentMax(arr, 0, 0, 1, 2)  << endl; // returns 6 (Maximum of all values that fall within the sub-rectangle that starts at row 0, column 0 and ends at row 1, column 2. The values that fall here are (1,2,3,4,5,6))
    cout << SegmentMax(arr, 0, 0, 2, 1)  << endl; // returns 8 (Maximum of all values that fall within the sub-rectangle that starts at row 0, column 0 and ends at row 2, column 1. The values that fall here are (1,2,4,5,7,8))
    cout << SegmentMax(arr, -1, 0, 1, 2) << endl; //  returns -1 (sr is invalid)
    cout << SegmentMax(arr, 0, 3, 1, 2)  << endl; // returns -1 (sc is invalid)
    cout << SegmentMax(arr, 1, 2, 0, 2)  << endl; // returns -1 (er is less than sr)
    cout << SegmentMax(arr, 1, 2, 1, 3)  << endl; // returns -1 (ec is invalid)
    

    return 0;
}


/**
 * @brief Compares starting and ending values for a segment inside an array and checks its validity
 * 
 * @param first starting argument to be checked
 * @param second ending argument to be checked
 * @return true if starting and ending arguments are valid
 * @return false if starting and ending arguments are invalid
 */
bool ValidityCheck(int first, int second) {

    if(first < 0 || first > 2 || second < 0 || second > 2) {
        return false;
    }

    if(first > second) {
        return false;
    }

    return true;
}

/**
 * @brief The following function takes a 3x3 array (arr) as its first parameter 
 * as well as the following parameters
 * sr: start row
 * sc: start column
 * er: end row
 * ec: end column
 * 
 * and returns the sum of all values in arr that fall within the sub-rectangle formed
 * by sr,sc and er,ec. All of sr,sc,er, and ec are inclusive.
 * 
 * If any of sr, sc, er or ec are invalid (i.e. not between 0 and 2 both inclusive) then the function should return -1.
 * er must be greater or equal to sr and ec must be greater or equal to sc.
 * 
 * 
 * For example, 
 * if arr = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    then 
    SegmentSum(arr, 0, 0, 1, 1) returns 12 (sum of all values that fall within the sub-rectangle that starts at row 0, column 0 and ends at row 1, column 1. The values that fall here are (1,2,4,5))
    SegmentSum(arr, 0, 0, 0, 0) returns 1 (sum of all values that fall within the sub-rectangle that starts at row 0, column 0 and ends at row 0, column 0. The values that fall here are (1))
    SegmentSum(arr, 0, 0, 1, 2) returns 21 (sum of all values that fall within the sub-rectangle that starts at row 0, column 0 and ends at row 1, column 2. The values that fall here are (1,2,3,4,5,6))
    SegmentSum(arr, 0, 0, 2, 1) returns 27 (sum of all values that fall within the sub-rectangle that starts at row 0, column 0 and ends at row 2, column 1. The values that fall here are (1,2,4,5,7,8))
    SegmentSum(arr, -1, 0, 1, 2) returns -1 (sr is invalid)
    SegmentSum(arr, 0, 3, 1, 2) returns -1 (sc is invalid)
    SegmentSum(arr, 1, 2, 0, 2) returns -1 (er is less than sr)
    SegmentSum(arr, 1, 2, 1, 3) returns -1 (ec is invalid)
 * 
 * 
 * @param arr, a 3x3 two-dimensional array
 * 
 * @param arr, a 3x3 two-dimensional array
 * @param sr, int, start row
 * @param sc , int, start column
 * @param er , int, end row
 * @param ec , int, end column
 * @return int , as described above
 */
int SegmentSum(unsigned int arr[3][3], int sr, int sc, int er, int ec){

    if(!(ValidityCheck(sr, er) && ValidityCheck(sc, ec))) {
        return -1;
    }

    int sum = 0;

    for(int i=sr; i <= er; i++) {
        for(int j=sc; j <= ec; j++) {
            sum += arr[i][j];
        }
    }

    return sum;
}

/**
 * @brief The following function takes a 3x3 array (arr) as its first parameter 
 * as well as the following parameters
 * sr: start row
 * sc: start column
 * er: end row
 * ec: end column
 * 
 * and returns the maximum of all values in arr that fall within the sub-rectangle formed
 * by sr,sc and er,ec. All of sr,sc,er, and ec are inclusive.
 * 
 * If any of sr, sc, er or ec are invalid (i.e. not between 0 and 2 both inclusive) then the function should return -1.
 * er must be greater or equal to sr and ec must be greater or equal to sc.
 * 
 * 
 * For example, 
 * if arr = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    then 
    SegmentMax(arr, 0, 0, 1, 1) returns 5 (Maximum of all values that fall within the sub-rectangle that starts at row 0, column 0 and ends at row 1, column 1. The values that fall here are (1,2,4,5))
    SegmentMax(arr, 0, 0, 0, 0) returns 1 (Maximum of all values that fall within the sub-rectangle that starts at row 0, column 0 and ends at row 0, column 0. The values that fall here are (1))
    SegmentMax(arr, 0, 0, 1, 2) returns 6 (Maximum of all values that fall within the sub-rectangle that starts at row 0, column 0 and ends at row 1, column 2. The values that fall here are (1,2,3,4,5,6))
    SegmentMax(arr, 0, 0, 2, 1) returns 8 (Maximum of all values that fall within the sub-rectangle that starts at row 0, column 0 and ends at row 2, column 1. The values that fall here are (1,2,4,5,7,8))
    SegmentMax(arr, -1, 0, 1, 2) returns -1 (sr is invalid)
    SegmentMax(arr, 0, 3, 1, 2) returns -1 (sc is invalid)
    SegmentMax(arr, 1, 2, 0, 2) returns -1 (er is less than sr)
    SegmentMax(arr, 1, 2, 1, 3) returns -1 (ec is invalid)
 * 
 * 
 * @param arr, a 3x3 two-dimensional array
 * 
 * @param arr, a 3x3 two-dimensional array
 * @param sr, int, start row
 * @param sc , int, start column
 * @param er , int, end row
 * @param ec , int, end column
 * @return int , as described above
 */
int SegmentMax(unsigned int arr[3][3], int sr, int sc, int er, int ec){

    if(!(ValidityCheck(sr, er) && ValidityCheck(sc, ec))) {
        return -1;
    }
    
    int max = 0;
    
    for(int i=sr; i <= er; i++) {
        for(int j=sc; j <= ec; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    return max;

}





