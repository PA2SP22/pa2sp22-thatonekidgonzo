/*
 * Name        : List Node Lab
 * Author      : Gonzalo Garcia
 * Description : List Node
 */
 
 #include <iomanip>
 #include "sl_node.h"
 #include <string>
 #include <sstream>
 using std::string;
 using std::stringstream;
 
 // Header Guard
#ifndef GARCIA_NODE_LIST_
#define GARCIA_NODE_LIST_

class SLList {
  public:
  // Constructor #1 //
  SLList();
  
  // Destructor #1 //
  ~SLList();
  
  //         //
  void InsertHead(int contents);
  
  //        //
  void RemoveHead();
  
  //           //
  void Clear();
  
  //        //
  unsigned int size() const;
  
  //       //
  string ToString() const;
  
  private:
  SLNode* head_;
  unsigned int size_;
  
  
};

// Rest of Header Guard
#endif
