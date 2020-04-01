/* CSCI 261: L5A by Jimmy Truong
 * Array Input/Output
 */

#include <iostream>

using namespace std;

const int AMOUNT = 15;

int main() {
    //Declaring Variables
    int numArray[AMOUNT];
    int input, count;

    cout << "Hey! Witness my first array mojo!\nEnter " << AMOUNT << " numbers and I will tell you what they are."
         << endl;
    //Asks for user input and changes the value of the array at the index
    for (int i = 1; i <= AMOUNT; i++) {
        cout << "NUMBER " << i << ": ";
        cin >> input;
        numArray[i] = input;
        count += 1;
    }
    //Prints the array
    cout << "So awesome!\nThe numbers are: ";
    for (int j = 1; j <= count; j++) {
        cout << numArray[j] << " ";
    }
    cout << "\nHave a nice day!" << endl;
    return 0;
}
