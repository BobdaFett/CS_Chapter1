//
// Created by lvas4 on 10/6/2022.
//

// Create a program that computes the product of the first 10 positive integers, and the sum of their reciprocals.
// Then realize that using floats is always more precise.

#include <iostream>
using namespace std;

int main() {
    cout << 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10 << endl;
    cout << 1/1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/6 + 1/7 + 1/8 + 1/9 + 1/10 << endl;
    cout << 1/1.0 + 1/2.0 + 1/3.0 + 1/4.0 + 1/5.0 + 1/6.0 + 1/7.0 + 1/8.0 + 1/9.0 + 1/10.0 << endl;

    return 0;
}