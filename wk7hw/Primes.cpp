#include <iostream>

using namespace std;

/**
 * @brief Output the first 5 prime integers.
 * 
 * Prime integers are integers that are divisible by 1 and itself. For example,
 * 2, 3, 5, 7, 11, 13, 19 are all primes
 * 
 * Composite integers are integers that are not prime. For example,
 * 6, 15, 20, 26 etc.
 * 
 */


/**
 * @brief This is a function that takes a positive
 *          integer as its parameter and 
 *          returns the number of factors the 
 *          integer has between
 *          1 and itself.
 * 
 * @param number, integer, assumed to be greater than 0 
 * @return integer, number of factors numbeer has between 1 and itself
 */

int CountFactors(int number){
    int factors = 0;
    for(int i = 1; i <= number; i++){
        if(number % i == 0){
            factors++;
        }
    }
    return factors;
}

void ShowFirstPrimes(int n){

    int factors = 0, primeCount = 0, number = 2;

    while(number >= 2){

        factors = CountFactors(number);

        // cout << "factor count for " << number << " is " << factors << endl;      

        if(factors == 2){
            cout << number << endl;
            primeCount++;
        }

        if(primeCount == n){
            break;
        }

        number++;
        factors = 0;
    }

    return;
}

void ShowPrimes(int x, int y) {
    
    string output = "";

    for(int i=x; i <= y; i++) {
        if(CountFactors(i) == 2) {
            output += to_string(i) + ", ";
        }
    }

    cout << output;

}

int SumPrimes(int n) {
    
    int sum = 0;
    int counter = 0;

    int number = 2;

    while(counter < n) {
        
        if(CountFactors(number) == 2) {
            sum += number;
            counter++;
        }
        number++;

    }

    return sum;
}

int main(){

    ShowFirstPrimes(3);
    ShowPrimes(3, 22);

    cout << "\nSum of 3 first primes: " << SumPrimes(3) << endl;
    
    return 0;
}

