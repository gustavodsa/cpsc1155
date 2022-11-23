/**
CPSC1155 – 001 – 202230
Instructor: Muntaseer Salahuddin
Midterm 2 Problem 1
Total Points: 30
Total Time (for all progrmming questions): 60 minutes

•	Place all your code inside this CPP file
•	submit your completed CPP file (along with other cpp files) through appropriate link on D2L
•	Please submit earlier than the end time to make sure you have an answer uploaded
o	Once submission link is closed it will be the end of this segment of the test
o	You can submit as many times as you want as long as it is before the deadline
o	Only LAST Submission will be kept

 * 
 */

#include <iostream>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>  

using namespace std;

bool Contains(int* arr1, int arr1Size, int* arr2, int arr2Size);
bool isEqualInt(int first, int second);
void fillArray(int* arr, int arrSize);
string arrayToString(int* arr, int arrSize);

int main(){

    srand(time(0));

    int arr1Size = 3;
    int *arr1 = new int[arr1Size];
    int arr2Size = 4;
    int *arr2 = new int[arr2Size];
    
    fillArray(arr1, arr1Size);
    fillArray(arr2, arr2Size);

    cout << "arr1: " << arrayToString(arr1, arr1Size) << endl;
    cout << "arr2: " << arrayToString(arr2, arr2Size) << endl;
    cout << "Are elements of arr1 inside arr2 (1 for true, 0 for false)? " << Contains(arr1, arr1Size, arr2, arr2Size) << endl;

    return 0;
}

/**
 * @brief 
 * The following function returns true if all the items in arr1 appear in arr2 in any order, false otherwise. 
 * 
 * REQUIREMENT:
 * You MUST DEFINE ADDITIONAL FUNCTIONS and use them inside this function in your final solution.
 * 
 * For example, 
 * if arr1 = {1,2,3}, arr2 = {3,1,2} then this function returns true.
 * if arr1 = {1,2,3}, arr2 = {1,2,3} then this function returns true.
 * if arr1 = {1,2,3}, arr2 = {3,1,4,2} then this function returns true.
 * if arr1 = {1,2,3}, arr2 = {3,3,1,1,2,2} then this function returns true.
 * if arr1 = {1,1,2,2,3}, arr2 = {3,1,2} then this function returns true.
 * if arr1 = {1,2,3,4}, arr2 = {3,1,2,2} then this function returns false (no 4 in arr2 but there is one in arr1).
 * 
 * @param arr1: array of integers
 * @param arr1Size: number of integers in arr1
 * @param arr2: array of integers
 * @param arr2Size: number of integers in arr2
 * @return boolean
 */
bool Contains(int* arr1, int arr1Size, int* arr2, int arr2Size){

    int counter = 0; /* Keep track of how many elements of arr1 we can find in arr2 */

    for(int i=0; i < arr1Size; i++) {

        for(int j=0; j < arr2Size; j++) {
            if(isEqualInt(arr1[i], arr2[j])) {
                counter++;
                break; /* break out of inner loop so counter does not go up for repeated elements */
            }
        }

    }

    if(isEqualInt(counter, arr1Size)) {
        return true;
    }

    return false;
}

/**
 * @brief Compares two integers and returns true if they are equal, false otherwise
 * 
 * @param first: integer value
 * @param second: integer value
 * @return boolean
 */
bool isEqualInt(int first, int second) {
    return first == second;
}

/**
 * @brief fill array with random integer values from 1 to 3
 * 
 * @param arr: array of integers
 * @param arrSize: size of array
 */
void fillArray(int* arr, int arrSize) {

    for(int i=0; i < arrSize; i++) {
        
        arr[i] = (rand() % 3) + 1;
    
    }

}

/**
 * @brief returns a string output for array content
 * 
 * @param arr: array of integers
 * @param arrSize: array size
 * @return string 
 */
string arrayToString(int* arr, int arrSize) {

    string output = "Array = {";

    for(int i=0; i < arrSize; i++) {
        if(i == arrSize - 1) {
            output += to_string(arr[i]) + "}";
        } else {
            output += to_string(arr[i]) + ",";
        }
    }

    return output;
}