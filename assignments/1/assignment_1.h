/*
 * Name        : Gonzalo Garcia
 * Author      : Gonzalo Garcia
 * Description : FILL IN
 * Sources     : FILL IN
 */

#ifndef ASSIGNMENT_1_H
#define ASSIGNMENT_1_H

// Add any includes and using statements Here
#include <iostream>
#include <string>
using std::string;

// Declare Function Prototypes Here (What goes above main)
bool CheckAlphabetic(const string &to_check);

bool EncryptString(string &to_encrypt, int shift);

bool DecryptString(string string_to_decrypt, int shifted_number);

double ComputeAverage(double value[], unsigned int size_of_array);

double FindMinValue(double value[], unsigned int size_of_array);

double FindMaxValue(double value[], unsigned int size_of_array);

#endif /* ASSIGNMENT_1_H */
