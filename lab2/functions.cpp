/*
 * functions.cpp
 *
 *  Created on: Jan 11, 2022
 *      Author: vtn2
 */


bool findDuplicate(int *numArr, unsigned size, int &dup) {
    for (unsigned i = 0; i < size - 1; ++i) {
        for (unsigned j = i + 1; j < size; ++j) {
            if (numArr[i] == numArr[j]) {
                dup = numArr[i];
                return true;
            }
        }
    }
    return false;
}
