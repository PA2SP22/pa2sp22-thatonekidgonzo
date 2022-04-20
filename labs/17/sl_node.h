/*
 * Name        : Node Lab
 * Author      : Gonzalo Garcia
 * Description : Node
 */
#include <iomanip>

// Header Guard
#ifndef GARCIA_NODE_
#define GARCIA_NODE_


class SLNode {
  public:
  // Constructor #1 (empty)
  SLNode();
  
  // Constructor #2 
  SLNode(int contents);
  
  // Mutator #1
  void set_contents (int contents);
  
  // Mutator #2
  void set_next_node(SLNode*);
  
  // Accessor #1
  int contents() const;
  
  // Accessor #2
  SLNode* next_node() const;
  
  // Destructors
  ~SLNode();
  
  
  
  
  private: 
  SLNode *next_node_;
  int contents_;
  
};


// Rest of Header Guard
#endif