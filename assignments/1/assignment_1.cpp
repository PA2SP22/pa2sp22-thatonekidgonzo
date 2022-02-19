/*
 * Name        : Gonzalo Garcia
 * Author      : Gonzalo Garcia
 * Description : Assignment #1
 * Sources     : FILL IN
 */

#include "assignment_1.h"

// Write Function Definitions Here (What goes below main)
/*  Function to make sure all char in the given parameter string(to_check).
    Returns true if the string is all alphabetical and false  if not or if the string is empty.
    Function returns a bool 
    Parameters (by const reference)
*/
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

/*  Function to encrypt given parameters string(to_encrypt) and int(shift) [how much to shift by]
    Returns true if the encryption was performed and false if it was not.
    Function returns a bool
    Parameters   string(by reference)   int
*/
  bool EncryptString(string &to_encrypt, int shift) {
    if (CheckAlphabetic(to_encrypt)) {
      shift %=26;
  for (unsigned int i = 0; i < to_encrypt.length(); i++) {
    if (isupper(to_encrypt.at(i))) {
    if ((to_encrypt.at(i) + shift > 90) || (to_encrypt.at(i) + shift < 65)) {
        to_encrypt.at(i) = to_encrypt.at(i) - (26 - shift);
        } else {
          to_encrypt.at(i) = to_encrypt.at(i) + shift;
          }
        } else {
  if ((to_encrypt.at(i) + shift) > 122 || (to_encrypt.at(i) + shift < 97)) {
  to_encrypt.at(i) = to_encrypt.at(i) + (26 + shift);
    } else {
      to_encrypt.at(i) = to_encrypt.at(i) + shift;
        }
      }
    }
    return true;
    } else {
      return false;
    }
  }

/* Function to decrypt given parameters string(to_encrypt) and int(shift) [how much to shift by]
   Returns true if the decryption was performed and false if it was not.
   function returns a bool
   Parameters string(by reference)   int

*/
  bool DecryptString(string string_to_decrypt, int shifted_number) {
     string_to_decrypt;
     shifted_number;
    return false;
  }

/* Function to compute the mean average of the values in the array value[] . 
   They array will be of at least size 1.
   returns a double
   Parameters array(double[])  unsigned int (size_of_array) 

*/
  double ComputeAverage(double value[], unsigned int size_of_array) {
    double total = 0.0;
    for (unsigned int i = 0; i < size_of_array; i++) {
      total += value[i];
    }
    return total / static_cast<double>(size_of_array);
  }

/*Function to find and return the smallest value in the given array value[] .
  They array will be of at least size 1.
  returns a doible
  Parameters array(double[])  unsigned int (size_of_array)  
*/
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

/*Function to find and return the largest value in t he given array value[] .
  The array will be of at least size 1.
  returns a double
  Parameters array(double[])  unsigned int (size_of_array)
*/
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
