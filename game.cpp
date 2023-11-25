#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdexcept>
#include <limits>  // Include the <limits> header

using namespace std;

const int codeLength = 4; // Adjust as needed
const int maxAttempts = 10;

// Function to generate a random secret code
void generateSecretCode(int secretCode[], int length) {
    srand(static_cast<unsigned>(time(nullptr)));
    for (int i = 0; i < length; i++) {
        secretCode[i] = rand() % 6; // 6 represents the number of possible colors (adjust as needed)
    }
}

// Function to check if two arrays are equal
bool areEqual(int code1[], int code2[], int length) {
    for (int i = 0; i < length; i++) {
        if (code1[i] != code2[i]) {
            return false;
        }
    }
    return true;
}

// Function to validate user input (0-5)
int validateInput() {
    int input;
    while (true) {
        cin >> input;
        if (cin.fail() || input < 0 || input > 5) {
            cin.clear(); // Clear error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cerr << "Error: Input must be an integer between 0 and 5" << endl<<"input the new integer"<<endl;
        } else {
            break;
        }
    }
    return input;
}

// Function to evaluate the guess
void evaluateGuess(const int secretCode[], const int guess[], int length) {
    int correctColorAndPosition = 0;
    int correctColorWrongPosition = 0;

    for (int i = 0; i < length; i++) {
        if (secretCode[i] == guess[i]) {
            correctColorAndPosition++;
        } else {
            for (int j = 0; j < length; j++) {
                if (i != j && secretCode[i] == guess[j]) {
                    correctColorWrongPosition++;
                }
            }
        }
    }

    cout << "Correct color and position: " << correctColorAndPosition << endl;
    cout << "Correct color but wrong position: " << correctColorWrongPosition << endl;
}

int main() {
    int secretCode[codeLength];
    int guess[codeLength];

    cout << "Welcome to Mastermind!" << endl;
    cout << "Guess the " << codeLength << "-color secret code (0-5) within " << maxAttempts << " tries." << endl;

    generateSecretCode(secretCode, codeLength);

    for (int attempts = 1; attempts <= maxAttempts; attempts++) {
        cout << "Attempt " << attempts << ": ";
        try {
            for (int i = 0; i < codeLength; i++) {
                guess[i] = validateInput();
            }
        } catch (const std::out_of_range& e) {
            continue;
        }

        if (areEqual(secretCode, guess, codeLength)) {
            cout << "Congratulations! You've cracked the code!" << endl;
            break;
        } else {
            cout << "Guess evaluation: ";
            evaluateGuess(secretCode, guess, codeLength);
        }
    }

    if (!areEqual(secretCode, guess, codeLength)) {
        cout << "Out of attempts. The secret code was: ";
        for (int i = 0; i < codeLength; i++) {
            cout << secretCode[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
