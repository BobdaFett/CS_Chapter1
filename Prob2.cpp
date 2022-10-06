//
// Created by lvas4 on 10/6/2022.
//

// Write a program that prints out a message “Hello, my name is Hal!”
// Then, on a new line, the program should print the message “What is your name?”
// Get the user input, and then print "Hello, user_name. I am glad to meet you."

#include <string>
#include <iostream>

using namespace std;

int main() {

    cout << "Hello, my name is Hal!" << endl;
    cout << "What is your name?" << endl;
    string user_name;
    cin >> user_name;
    cout << "Hello, " << user_name << ". I am glad to meet you." << endl;

    return 0;
}