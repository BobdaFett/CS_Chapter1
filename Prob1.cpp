//
// Created by lvas4 on 10/6/2022.
//

// Write a program that prints the message "Hello, my name is Hal!" Then, on a new line, the program should print the
// message "What would you like me to do?" Then it's the user's turn to type in an input. Finally, ignore the user input
// and print the message "Sorry, I cannot do that."

#include <string>
#include <iostream>

using namespace std;

int main() {

    cout << "Hello, my name is Hal!" << endl;
    cout << "What would you like me to do?" << endl;
    string user_input;
    cin >> user_input;
    cout << "Sorry, I cannot do that." << endl;

    return 0;
}