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
using std::ifstream;
using std::cerr;

int main(int argc, char** argv) {
  if (argc == 1) {
    while (!cin.eof()) {
      string output;
      cin >> output;
      cout << output << endl;
    }
    return 0;
  } else {
    string file;
    for (int i = 1; i < argc; i++) {
      file = argv[i];
      ifstream open(file);
      if (open.fail()) {
        cerr << "File does not exist" << endl;
        exit(1);
      }
    }
    for (int i = 1; i < argc; i++) {
      string output;
      file = argv[i];
      ifstream read(file);
      while (!read.eof()) {
        getline(read, output);
        cout << output << endl;
      }
    }
  }
  return 0;
}
