/**
CPSC1155 – 001 – 202230
Instructor: Muntaseer Salahuddin
Midterm 1 Part 1 Question 2
Total Points: 40
Total Time: 60 minutes

•	Place your code for this problem inside this CPP file
•	submit your completed CPP file (along with all other cpp files) as a zip file
     through appropriate link on D2L
o	Once submission link is closed it will be the end of this segment of the test
o	You can submit as many times as you want as long as it is before the deadline
o	Only LAST Submission will be kept

 * 
 */

/**
 * Write a c++ program that asks user to input a string. The program should
 * output the number of hashtags (#) in the input string.
 * 
 * The string may be of any length. Hence you will need a loop to go through
 * all characters in the string.
 * 
 * The string method length() returns the number of characters in the string.
 *  
 * A sample run of the program:
 * Enter a string: abc#234#$#
 * Input contains 3 hashtags.
 * 
 * hint:
 * string x = "apple";
 * cout << x.length(); // outputs 5
 * cout << x[3]; // outputs l
 */

#include <iostream>
#include <string>

using namespace std;


int main(){
    
    string input;

    cout << "Please input your string: ";
    cin >> input;

    int counter = 0;

    for(int i=0; i < input.length(); i++) {
        if(input[i] == '#') {
            counter++;
        }
    }

    cout << "Input contains " << counter << " hashtags." << endl;

    return 0;
}
