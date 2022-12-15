/**
CPSC1155 sec 2 – 202230
Instructor: Muntaseer Salahuddin
Final Exam Problem 1
Total Points (for this problem): 20
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
#include <string>

using namespace std;

bool ParenthesisCheck(string text);

int main(){

    // test your work here, no need to take inputs from user, you can hardcode various cases, test as many cases as possible

    cout << ParenthesisCheck("()") << endl;     // should return true. 
    cout << ParenthesisCheck("(())") << endl;   // should return true.
    cout << ParenthesisCheck("()()") << endl;   // should return true.
    cout << ParenthesisCheck("(()") << endl;    // should return false. Not enough closing parenthesis.
    cout << ParenthesisCheck("(x+y)") << endl;  // should return false. String contains characters other than open parenthesis and closing parenthesis
    cout << ParenthesisCheck("(()())") << endl; // should return true.
    cout << ParenthesisCheck("())") << endl;    // should return false. Too many closing parenthesis.
    cout << ParenthesisCheck("( ) ") << endl;   // should return false. String contains spaces, no characters other than opening and closing parenthesis allowed.

    return 0;
}

/**
 * @brief 
 *  
 * The following function takes a string containing opening and closing parenthesis and 
 * returns true if all open parenthesis have been closed; false otherwise.
 * The function should also return false if the string contains any other character
 * other than opening and closing parenthesis.
 * 
 * For example, 
 * ParenthesisCheck("()") should return true. 
 * ParenthesisCheck("(())") should return true.
 * ParenthesisCheck("()()") should return true.
 * ParenthesisCheck("(()") should return false. Not enough closing parenthesis.
 * ParenthesisCheck("(x+y)") should return false. String contains characters other than open parenthesis and closing parenthesis
 * ParenthesisCheck("(()())") should return true.
 * ParenthesisCheck("())") should return false. Too many closing parenthesis.
 * ParenthesisCheck("( ) ") should return false. String contains spaces, no characters other than opening and closing parenthesis allowed.
 * 
 * 
 * @param text: string
 * @return boolean
 */
bool ParenthesisCheck(string text){

    int open = 0;
    int close = 0;
    
    for(int i=0; i < text.length(); i++) {
        if(text[i] == '(') {
            open++;
        } else if(text[i] == ')') {
            close++;
        } else {
            return false;
        }
    }

    return open == close; // returns true in case values are equal, false otherwise

}