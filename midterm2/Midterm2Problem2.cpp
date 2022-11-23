/**
CPSC1155 – 001 – 202230
Instructor: Muntaseer Salahuddin
Midterm 2 Problem 2
Total Points: 20
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

using namespace std;

string CommonPrefix(string s1, string s2);
bool isEqualChar(char first, char second);
int shortestInt(int first, int second);
void testCase(string s1, string s2, string expected);

int main(){

    testCase("abc", "abdc", "ab");
    testCase("abc", "abc", "abc");
    testCase("abc", "aebc", "a");
    testCase("abc", "cba", "");
    testCase("hey", "hello", "he");
    testCase("he3", "hello", "he");

    return 0;
}

/**
 * @brief 
 * The following function returns the longest common shared part between the beginnings of two strings.
 * 
 * REQUIREMENT:
 * You MUST DEFINE ADDITIONAL FUNCTIONS and use them inside this function in your final solution.
 * 
 * For example, 
 * if s1 = "abc", s2 = "abdc" then this function returns "ab".
 * if s1 = "abc", s2 = "abc" then this function returns "abc".
 * if s1 = "abc", s2 = "aebc" then this function returns "a".
 * if s1 = "abc", s2 = "cba" then this function returns "".
 * 
 * @param s1: string
 * @param s2: string
 * @return string
 */
string CommonPrefix(string s1, string s2){

    int shortestLength = shortestInt(s1.length(), s2.length());
    string prefix = "";

    for(int i=0; i < shortestLength; i++) {
        if(isEqualChar(s1[i], s2[i])) {
            prefix += s1[i];
        } else {
            /* In case characters are different stop accounting for prefix */
            break;
        }
    }

    return prefix;

}

/**
 * @brief Compares two characters and returns true if they are equal, false otherwise
 * 
 * @param first: character
 * @param second: character
 * @return boolean
 */
bool isEqualChar(char first, char second) {
    return first == second;
}

/**
 * @brief Returns the shortest integer between parameters given
 * 
 * @param first: integer value
 * @param second: integer value
 * @return int
 */
int shortestInt(int first, int second) {
    
    if(first < second) {
        return first;
    }

    return second;
}

/**
 * @brief Evaluates CommonPrefix result and compares to expected result and displays a message if test case passed or failed
 * 
 * @param s1: first string
 * @param s2: second string
 * @param expected: expected result of common prefix
 */
void testCase(string s1, string s2, string expected) {
    string prefix = CommonPrefix(s1, s2);

    cout << "\nStrings: '" << s1 << "' '" << s2 << "'\n";
    cout << "Expected result: " << expected << " \nActual Result: " << prefix << "\n";

    if(prefix == expected) { 
        cout << "Test case: Passed\n";
    } else {
        cout << "Test case: Failed\n";
    }
}