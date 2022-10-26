#include <iostream>
#include <stdlib.h>  
#include <time.h> 
#include <string>
#include <cctype>

using namespace std;

int main() {
    
    srand (time(0));

    int n;

    cout << "Enter the number of characters for your random string: ";
    cin >> n;

    string random;
    bool randomCondition = false; /* Condition to check if string has already a number, a lowercase letter and a uppercase letter */
    

    while(!randomCondition) {

        random = "";
        int number = 0;
        int lowercase = 0;
        int uppercase = 0;

        for(int i=0; i < n; i++) {
            switch(rand() % 3) { 
                case 0:
                    random += (rand() % 10) + 48;
                    break;
                case 1:
                    random += (rand() % 26) + 97;
                    break;
                case 2:
                    random += (rand() % 26) + 65;
                    break;
                default:
                    break;
            }
        }
        /* Loop through string again to check if it meets the conditions, making sure that is totally random */
        for(int i=0; i < n; i++) {
            if(isupper(random[i])) {
                uppercase++;
            } else if(islower(random[i])) {
                lowercase++;
            } else {
                number++;
            }
        }

        if(number && uppercase && lowercase) { /* If one of the variables is equal to 0, condition will resolve to false*/
            randomCondition = true;
        }
    }

    cout << random << endl;

}