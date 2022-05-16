/*
 * main.cpp
 *
 *  Created on: Jan 11, 2022
 *      Author: vtn2
 */

#include <fstream>
#include <iostream>
#include <string>
#include <cassert>

#include "functions.h"
using namespace std;

#if 0
int main() {
    string filename;
    unsigned size;

    cout << "Enter a filename of a file containing numbers: ";
    cin >> filename;

    cout << "How many numbers are in the file?: ";
    cin >> size;

    ifstream in_file(filename);
    assert(in_file.is_open());

    int *numbers = new int[size];

    // read in numbers into the array.
    unsigned i = 0;
    while (in_file >> numbers[i]) {
        i++;
    }
    in_file.close();

    // check for duplicates: dup_number is an OUT parameter.
    int dup_number;
    bool found = findDuplicate(numbers, size, dup_number);

    if (found) {
        cout << "Found a duplicate number in the file. It was " << dup_number
             << "." << endl;
    } else {
        cout << "Found no duplicates in the file." << endl;
    }

    return 0;
}
#endif