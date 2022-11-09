#include <iostream>
#include <string>

using namespace std;

string GetCreditCard();
// takes input the credit number to be validated as a string
// and returns that string.
// assume user input string contains only digit characters

bool IsValid(string cc);
// a credit card number (cc) is passed as a string to this
// function and the function returns true if cc is a valid
// number; false otherwise

bool HasValidLength(string cc);
// returns true if credit card number (cc) has a valid length, 
// false otherwise

bool HasValidPrefix(string cc);
// returns true if credit card number (cc) has a valid prefix, 
// false otherwise

int SumEvenDigits(string cc);
// carefully read the description provided in the 
// homework document on how to do this sum.
// returns the sum of the even positioned digits
// in the credit card number (cc) as described
// in the homework document

int SumOddDigits(string cc);
// returns the sum of the odd positioned digits
// in the credit card number (cc) as described
// in the homework document

bool LuhnCheck(int sumE, int sumO);
// returns true if sumE + sumO is divisible by
// 10; false otherwise. This is the last step
// of Luhn's method of credit card validation,
// hence the name Luhn's check



int main(){
    string creditCard = GetCreditCard();
    cout << "credit card entered: " << creditCard << endl;
    if(IsValid(creditCard)){
        cout << "Valid" << endl;
    }
    else{
        cout << "Invalid" << endl;
    }
    
    return 0;
}

bool IsValid(string cc){
    if(!HasValidLength(cc)){
        return false;
    }

    if(!HasValidPrefix(cc)){
        return false;
    }

    int sumEven = SumEvenDigits(cc);
    int sumOdd = SumOddDigits(cc);

    if(!LuhnCheck(sumEven, sumOdd)){
        return false;
    }

    return true;
}

string GetCreditCard() {
    string card = "";
    cout << "Input the credit card number: ";
    cin >> card;
    return card;
}

bool HasValidLength(string cc) {
    
    if(cc.length() > 16 || cc.length() < 13) {
        return false;
    }

    return true;
}

bool HasValidPrefix(string cc) {

    if(cc[0] == '4' || cc[0] == '5' || cc[0] == '6' || (cc[0] == '3' && cc[1] == '7')) {
        return true;
    }

    return false;
}

int SumEvenDigits(string cc) {

    int sum = 0;
    int numberDoubled = 0;

    for(int i = cc.length() - 2; i >= 0; i-=2) {

        /* Substracting the ascii code of '0' from the number will give the actual number in integer (typecast), once we are subtracting char variables */
        /* For example: '7' = 55 in ascii and '0' = 48 in ascii : '7' - '0' = 55 - 48 = 7 */
        numberDoubled = (cc[i] - '0') * 2;

        if(numberDoubled > 9) {
            /* Maximum value we can get from doubling would be (9 * 2) = 18, therefore get the right digit and add 1 to it*/
            sum += (numberDoubled % 10) + 1;
        } else {
            sum += numberDoubled;
        }
    }

    return sum;
}

int SumOddDigits(string cc) {
    int sum = 0;

    for(int i=1; i < cc.length(); i+=2) {
        sum += (cc[i] - '0');
    }

    return sum;
}


bool LuhnCheck(int sumE, int sumO) {
    if((sumE + sumO) % 10 == 0) {
        return true;
    }

    return false;
}