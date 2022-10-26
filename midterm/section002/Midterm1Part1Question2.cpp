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
 * Write a c++ program that asks user to input a positive integer. The program should
 * output the sum of all digits in the input integer.
 * 
 * For example, the sum of all digits of 123 is 6 (1 + 2 + 3).
 * 
 * You can assume that user will always input a positive integer.
 *  
 * A sample run of the program:
 * Enter a positive integer: 1234 
 * Sum of digits: 10
 * 
 * Hint:
 * Suppose that a variable x contains a positive integer. Then x % 10 produces the
 * last digit in x. x /= 10 will remove the last digit from x.
 * For example, if x = 123, then x % 10 will be 3.
 * Performing x /= 10 will reduce x to 12.
 */

#include <iostream>

using namespace std;


int main(){
    
    int number;

    cout << "Please input your positive integer: ";
    cin >> number;

    int sum = 0;

    while(number != 0) {
        sum += number % 10;
        number /= 10;
    }

    cout << "Sum of digits: " << sum << endl;

    return 0;
}
