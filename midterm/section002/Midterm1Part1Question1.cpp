/**
CPSC1155 – 001 – 202230
Instructor: Muntaseer Salahuddin
Midterm 1 Part 1 Question 1
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
 * Write a c++ program that asks user to input a 4 character string. The program should
 * output each character of the input on a separate line. Finally the program should
 * output "Palindrome" or "Not a palindrome".
 * 
 * Palindromic texts read the same left to right and right to left. For
 * example, "abba", "1221", "#$$#" are palindromes. "dogs", "2345", "#$@#" are examples of strings 
 * that are not palindromes.
 * 
 * You can assume that the user will always input a 4 character string.
 * 
 * A sample run of the program:
 * Enter a 4-character string: abba
 * Characters:
 * a
 * b
 * b
 * a
 * This is a palindrome.
 * 
 * Hint:
 * You can access characters from a string using [] operator.
 * For example,
 * string s = "ab";
 * cout << s[1]; // outputs b  
 * 
 */

#include <iostream>
#include <string>

using namespace std;



int main(){

    string input;
    
    cout << "Please input your 4-character string: ";
    cin >> input;

    for(int i=0; i < input.length(); i++) {
        cout << input[i] << endl;
    }

    if(input[0] == input[3] && input[1] == input[2]) {
        cout << "This is a palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }
    
    return 0;
}

