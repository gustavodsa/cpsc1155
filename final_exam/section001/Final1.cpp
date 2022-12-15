/**
CPSC1155 – 202230
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

int HD(string word1, string word2);

int main(){

    // test your work here, no need to take inputs from user, you can hardcode various cases, test as many cases as possible

    string word1 = "test";
    string word2 = "tesT";

    cout << HD(word1, word2) << endl;

    return 0;
}

/**
 * @brief 
 *  
 * Hamming distance between two strings of equal length is the number of positions
 * where the two strings have different characters. If two strings are of different length
 * then their Hamming distance is -1.
 * Write the body of the following function which returns the Hamming Distance between
 * the two strings word1 and word2.
 * 
 * For example, 
 * HD("cat", "Cat") should return 1 (the two strings are different in 1 position i.e. position 0). 
 * HD("cat", "CAT") should return 3 (the two strings are different in all 3 positions).
 * HD("cat", "cat") should return 0 (the two strings are the same in all 3 positions).
 * HD("abc", "aqr") should return 2 (the two strings are different in 2 positions i.e. position 1 and position 2).
 * HD("cat", "cats") should return -1 (the two strings are of different length).
 * 
 * @param word1: string
 * @param word2: string
 * @return int: length of the longest valid gene (see above decription) in dna
 */
int HD(string word1, string word2){
    
    if(word1.length() != word2.length()) {
        return -1;
    }

    int diff = 0;

    for(int i=0; i < word1.length(); i++) {
        if(word1[i] != word2[i]) {
            diff++;
        }
    }

    return diff;

}