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
 * Write a c++ program that asks user to input a 3 digit positive integer. The program should
 * output each digit of the input integer on a separate line. Finally the program should
 * output "Palindrome" or "Not a palindrome".
 * 
 * Palindromes are integers that read the same left to right and right to left. For
 * example, 121, 2332, 98789 are palindromes. 123, 234567, 122 are examples of integers 
 * that are not palindromes. All single digit numbers are palindromes.
 * 
 * You can assume that the user will always input a 3 digit positive integer.
 * 
 * A sample run of the program:
 * Enter a 3-digit positive integer: 121
 * Digits:
 * 1
 * 2
 * 1
 * This is a palindrome.
 * 
 * Hint:
 * Suppose that a variable x contains a positive integer. Then x % 10 produces the
 * last digit in x. x /= 10 will remove the last digit from x.
 * For example, if x = 123, then x % 10 will be 3.
 * Performing x /= 10 will reduce x to 12.  
 * 
 */

#include <iostream>

using namespace std;



int main(){

    int number;

    cout << "Please input your 3-digit positive number: ";
    cin >> number;

    int lastDigit = number % 10;
    
    number /= 10;
    int middleDigit = number % 10;
    
    number /= 10; 
    int firstDigit = number;

    cout << firstDigit << endl;
    cout << middleDigit << endl;
    cout << lastDigit << endl;

    if(firstDigit == lastDigit) {
        cout << "This is a palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}

