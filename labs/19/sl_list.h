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
  
  void InsertTail(int contents);

  //        //
  void RemoveHead();

  void RemoveTail();
  
  int GetHead() const;
  
  int GetTail() const;
  
  
  //           //
  void Clear();

  //        //
  unsigned int size() const;

  //       //
  string ToString() const;

 private:
  SLNode* head_;
  SLNode* tail_;
  unsigned int size_;
};

// Rest of Header Guard
#endif
