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
      for (int i = 0; i < to_check.length(); i++) {
        }
      if (isalpha(to_check.at(i)) == 0) {
        return false;
      } else {
        return true;
      }
    } else {
      return false;
    }
      
   } 


  bool EncryptString(string string_to_encrypt, int shift_number) {
    
    return false;
  }
  
  
  bool DecryptString(string string_to_decrypt, int shifted_number) {
    
    return false;
  }
  
  
  double ComputeAverage(double[], unsigned int size_of_array) {
    
    return 1.0;
  }
  
  
  double FindMinValue(double[], unsigned int size_of_array) {
    
    return 1.0;
  }
  
  
  double FindMaxValue(double[], unsigned int size_of_array) {
    
    return 1.0;
  }