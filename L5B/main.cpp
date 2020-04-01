/* CSCI 261: L5B by Jimmy Truong
 * Matrix Transposition
 */
#include <iostream>
#include <iomanip>

using namespace std;
const int ROWS = 4, COLUMNS = 3;

int main() {
    //Welcome Message
    cout << "Welcome to the Matrix Calculator!" << endl;
    cout << "\nPlease enter a " << ROWS << "x" << COLUMNS << " matrix:\n" << endl;

    //Asks for user input
    int array[ROWS][COLUMNS];
    for (int i = 1; i <= ROWS; i++) {
        for (int j = 1; j <= COLUMNS; j++) {
            cout << "Enter Row " << i << " Column " << j << ": ";
            cin >> array[i - 1][j - 1];
        }
        cout << endl;
    }

    //Prints out the matrix
    cout << "The matrix you entered is: " << endl;
    for (int i = 1; i <= ROWS; i++) {
        cout << "[";
        for (int j = 1; j <= COLUMNS; j++) {
            cout << setw(4) << array[i - 1][j - 1];
        }
        cout << " ]" << endl;
    }

    //Prints out the Transpose of Matrix
    cout << "\nThe transpose of the matrix is: " << endl;
    for (int i = 1; i <= COLUMNS; i++) {
        cout << "[";
        for (int j = 1; j <= ROWS; j++) {
            cout << setw(4) << array[j - 1][i - 1];
        }
        cout << " ]" << endl;
    }

    cout << "\nHave a nice day!";
}
