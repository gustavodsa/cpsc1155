/**
CPSC1155 – 202230
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

int RowSum(unsigned int arr[3][3], int r);
int ColumnSum(unsigned int arr[3][3], int c);
void MaxRowMinColumn(unsigned int arr[3][3], int &maxRow, int &minColumn);

int main(){
/*
BEWARE
the content of the following array is just a sample. Your program may be tested
with different content. 
*/
    const int rows = 3;
    const int columns = 3;
    unsigned int arr[rows][columns] = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << RowSum(arr, 0) << endl; // output: 6
    cout << RowSum(arr, 3) << endl; // output: -1
    cout << RowSum(arr, -4) << endl; // output: -1
    cout << RowSum(arr, 2) << endl; // output: 24

    cout << ColumnSum(arr, 0) << endl; // output: 12
    cout << ColumnSum(arr, 3) << endl; // output: -1
    cout << ColumnSum(arr, -1) << endl; // output: -1
    cout << ColumnSum(arr, 2) << endl; // output: 18


    int maxRow, minColumn;
    MaxRowMinColumn(arr, maxRow, minColumn);
    cout << maxRow << endl; // output: 2
    cout << minColumn << endl; // output: 0

    return 0;
}

/**
 * @brief The following function returns the sum of all values on row r of a 3x3 
 * two-dimensional array named arr.
 * 
 * If r is invalid then this function should return -1, otherwise the function
 * returns the sum of all values on row r of arr.
 * 
 * For example, 
 * if arr = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    then 
    RowSum(im, 0) returns 6 (sum of all values on row 0)
    RowSum(im, 3) returns -1 (invalid row index)
    RowSum(im, -4) returns -1 (invalid row index)
    RowSum(im, 2) returns 24 (sum of all values on row 2)
 * 
 * 
 * @param arr, a 3x3 two-dimensional array
 * @param r, integer
 * @return int (as described above)
 */
int RowSum(unsigned int arr[3][3], int r){

    if(r > 2 || r < 0) {
        return -1;
    }

    int sum = 0;

    for(int i=0; i < 3; i++) {
        sum += arr[r][i];
    }

    return sum;
}

/**
 * @brief The following function returns the sum of all values on column c of a 3x3 
 * two-dimensional array named arr.
 * 
 * If c is invalid then this function should return -1, otherwise the function
 * returns the sum of all values on column c of arr.
 * 
 * For example, 
 * if arr = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    then 
    ColumnSum(arr, 0) returns 12 (sum of all values on column 0)
    ColumnSum(arr, 3) returns -1 (invalid column index)
    ColumnSum(arr, -1) returns -1 (invalid column index)
    ColumnSum(arr, 2) returns 18 (sum of all values on column 2)
 * 
 * 
 * @param arr, a 3x3 two-dimensional array
 * @param c, integer
 * @return int (as described above)
 */
int ColumnSum(unsigned int arr[3][3], int c){
    
    if(c > 2 || c < 0) {
        return -1;
    }


    int sum = 0;

    for(int i=0; i < 3; i++) {
        sum += arr[i][c];
    }

    return sum;

}

/**
 * @brief This function takes a 3x3 two-dimensional array as its parameter and returns
 * the row index of the row whose values produce the largest sum and the column index
 * of the column whose values produce the smallest sum through the two pass-by-reference
 * parameters maxRow and minColumn respectively.
 * 
 * For example, 
 * if arr = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    then this function will set maxRow to 2 and minColumn to 0 before returning.

    ********REQUIREMENT***********
    This function must make use of RowSum and ColumnSum functions wherever appropriate.
 * 
 * @param arr, a 3x3 two-dimensional array
 * @param maxRow, an integer, set to row index of the row whose values produce the largest sum 
 * @param minColumn, an integer, set to column index of the column whose values produce the smallest sum 
 */
void MaxRowMinColumn(unsigned int arr[3][3], int &maxRow, int &minColumn){
    // ********REQUIREMENT***********
    // This function must make use of RowSum and ColumnSum functions wherever appropriate.

    int rowMax = 0;
    int colMin = 0;

    for(int i=0; i < 3; i++) {
        if(ColumnSum(arr, i) < colMin) {
            colMin = i;
        }

        if(RowSum(arr, i) > rowMax) {
            rowMax = i;
        }
    }

    maxRow = rowMax;
    minColumn = colMin;

}



