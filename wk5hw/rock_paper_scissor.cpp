#include <iostream>
#include <stdlib.h>  
#include <time.h> 
#include <string>
#include <cctype>

using namespace std;

int main() {
    
    srand (time(0));
    
    int player1, player2, gamemode, rounds, player1Score = 0, player2Score = 0;

    cout << "----------------------------------------" << endl;
    cout << "\n Welcome to rock paper scissors\n" << endl;
    cout << "----------------------------------------" << endl;

    cout << "\nWhat gamemode would you like to play?" << endl;
    cout << "Player vs Player (0)\nPlayer vs Computer (1)\nComputer vs Computer (2)\n";
    cout << "Enter your choice: ";
    cin >> gamemode;

    cout << "How many rounds would you like to play? ";
    cin >> rounds;

    for(int i=0; i < rounds; i++) {
        switch (gamemode) {
        case 0:

            cout << "\nRock(0) Paper(1) or Scissors(2) ?" << endl;
            cout << "Player 1: ";
            cin >> player1;
            cout << "Player 2: ";
            cin >> player2;

            if(player1 - player2 == 1) {
                cout << "Player1 Wins!\n";
                player1Score++;
            }else if(player1 - player2 == 0) {
                cout << "It's a tie.\n";
            }else if(player1 - player2 == -1) {
                cout << "Player2 Wins!\n";
                player2Score++;
            }else if(player1 - player2 == -2) {
                cout << "Player1 Wins!\n";
                player1Score++;
            }else if(player1 - player2 == 2) {
                cout << "Player2 Wins!\n";
                player2Score++;
            }
            break;
        
        case 1:

            cout << "\nRock(0) Paper(1) or Scissors(2) ?" << endl;
            cout << "Player 1: ";
            cin >> player1;

            player2 = rand() % 3;

            if(player1 - player2 == 1) {
                cout << "Player1 Wins!\n";
                player1Score++;
            }else if(player1 - player2 == 0) {
                cout << "It's a tie.\n";
            }else if(player1 - player2 == -1) {
                cout << "Player2 Wins!\n";
                player2Score++;
            }else if(player1 - player2 == -2) {
                cout << "Player1 Wins!\n";
                player1Score++;
            }else if(player1 - player2 == 2) {
                cout << "Player2 Wins!\n";
                player2Score++;
            }
            break;
        
        case 2:

            
            player1 = rand() % 3;
            player2 = rand() % 3;

            if(player1 - player2 == 1) {
                cout << "Player1 Wins!\n";
                player1Score++;
            }else if(player1 - player2 == 0) {
                cout << "It's a tie.\n";
            }else if(player1 - player2 == -1) {
                cout << "Player2 Wins!\n";
                player2Score++;
            }else if(player1 - player2 == -2) {
                cout << "Player1 Wins!\n";
                player1Score++;
            }else if(player1 - player2 == 2) {
                cout << "Player2 Wins!\n";
                player2Score++;
            }
            break;

        default:
            break;
        }
    }

    cout << "\nStats:" << endl;
    cout << "Rounds played: " << rounds << endl;
    cout << "Player1 wins: " << player1Score << endl;
    cout << "Player2 wins: " << player2Score << endl;
    
    if(player1Score > player2Score) {
        cout << "Overall winner: Player1!" << endl;
    } else if(player1Score < player2Score) {
        cout << "Overall winner: Player2!" << endl;
    } else {
        cout << "Overall winner: It was a tie." << endl;
    }

}