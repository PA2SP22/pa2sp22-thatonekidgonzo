/*
 * Name        : Gonzalo Garcia
 * Author      : Gonzalo Garcia
 * Description : Assignment #1
 * Sources     : FILL IN
 */

#include "assignment_1.h"

// Write Function Definitions Here (What goes below main)

  bool CheckAlphabetic(const string &to_check) {
    if (to_check.length() > 0) {
    int non_alphabetic = 0;
    for (unsigned int i = 0; i < to_check.length(); i++) {
      if (isalpha(to_check.at(i)) == 0) {
        non_alphabetic++;
        }
    }
        if (non_alphabetic > 0) {
          return false;
        } else {
          return true;
        }
      
    } else {
      return false;
    }
  }
 
 
  bool EncryptString(string &string_to_encrypt, int shift_number) {
    if (CheckAlphabetic(string_to_encrypt) == true) {
      for ( unsigned int i = 0; i < string_to_encrypt.length(); i++) {
        if (isupper(string_to_encrypt.at(i))) {
          if (string_to_encrypt.at(i) + shift_number > 90 || string_to_encrypt.at(i) + shift_number < 65) {
            string_to_encrypt.at(i) = string_to_encrypt.at(i) + 26;
          } else {
            string_to_encrypt.at(i) = string_to_encrypt.at(i) + shift_number;
          }
        } else { 
        if ((string_to_encrypt.at(i) + shift_number) > 122) {
          string_to_encrypt.at(i) = string_to_encrypt.at(i) - 26; 
        } else {
          string_to_encrypt.at(i) = string_to_encrypt.at(i) + shift_number;
        }
      }
    } 
    } else {
      return false;
    }
    return false;
  }
  
  
  bool DecryptString(string string_to_decrypt, int shifted_number) {
     string_to_decrypt;
     shifted_number;
    return false;
  }
  
  
  double ComputeAverage(double value[], unsigned int size_of_array) {
    double total = 0.0;
    for (unsigned int i = 0; i < size_of_array; i++) {
      total += value[i];
    }
    return total / static_cast<double>(size_of_array);
  }
  
  
  double FindMinValue(double value[], unsigned int size_of_array) {
    double min_value;
    min_value = value[0];
    for (unsigned int i = 0; i < size_of_array; i++) {
      if (value[i] < min_value) {
        min_value = value[i];
      }
    }
    return min_value;
  }
  
  
  double FindMaxValue(double value[], unsigned int size_of_array) {
    double max_value;
    max_value = value[0];
    for (unsigned int i = 0; i < size_of_array; i++) {
      if (value[i] > max_value) {
        max_value = value[i];
      }
    }
    return max_value;
  }