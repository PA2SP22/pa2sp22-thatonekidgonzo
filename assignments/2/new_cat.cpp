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
    string to_check;
    for (int i = 1; i < argc; i++) {
    if (cin.fail()) {
      cerr << "File name not valid" << endl;
      exit(1);
    }
  }
   for (int i = 1; i < argc; i++) {
     if (cin.)
   }
    }
    
   //advanced i/o
      
    }
      
    }
    }
  
  }
 
// string output;
// for (int i = 1; i < argc; i++) {
// output.append(argv[i]);
// }
// cout << output << endl;

    
  
  
  return 0;
}
