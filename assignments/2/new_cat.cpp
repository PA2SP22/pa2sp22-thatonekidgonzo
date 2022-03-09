/* Name : Assignment 2
   Author: Gonzalo garcia
   Description
*/

#include <iostream>
#include <string>
#include <fstream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(int argc, char *argv[]) {
  if (argc == 1) {
    string line;
     while (!cin.eof()) { 
      // Get input from user (getline)
      getline(cin,line);
      // Output it back
      cout << line << endl;
     }
  } else {
    ifstream fin;
    string to_check;
    // Loop to see if the files exist
    for (int i = 1; i < argc; i++) {
      // Open the file
      fin.open(argv[i]);
      // Check to see if it exists
      if (fin.fail()) {
        cerr << "File name not valid" << endl;
        exit(1);
      }
      // Close the file
      fin.close();
    }
    for (int i = 1; i < argc; i++) {
     // Open the file
      fin.open(argv[i]);
     // Ouput its contents
     getline(cin,argv[i]);
     cout << argv[i] << endl;
     // Close the file
     fin.close();
    }
  }
    
   //advanced i/o
      
}
      

    
  
  
  return 0;
}
