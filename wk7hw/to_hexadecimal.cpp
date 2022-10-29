#include <iostream>

using namespace std;

string ToHexadecimal(int n) {
    string hex = "";

    while(n > 0) {
        switch(n % 16) {
            case 0 ... 9:
                hex = to_string(n % 16) + hex;
                break;
            case 10:
                hex = 'A' + hex;
                break;
            case 11:
                hex = 'B' + hex;
                break;
            case 12:
                hex = 'C' + hex;
                break;
            case 13:
                hex = 'D' + hex;
                break;
            case 14:
                hex = 'E' + hex;
                break;
            case 15:
                hex = 'F' + hex;
                break;
            default:
                break;
        }
        n = n/16;
    }

    return hex;

}

int main() {
    int number;
    cout << "Please input a number: ";
    cin >> number;

    cout << ToHexadecimal(number) << endl;
}