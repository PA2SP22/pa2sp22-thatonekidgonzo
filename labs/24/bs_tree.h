/*
 * Name        : Tree Lab
 * Author      : Gonzalo Garcia
 * Description : Tree Lab
 */

#include <iomanip>
#include "bst_node.h"
#include <string>
#include <sstream>
using std::stringstream;
using std::string;
  // Header Guard
#ifndef GARCIA_TREE_LAB_PART_TWO_
#define GARCIA_TREE_LAB_PART_TWO_

class BSTree {
 public:
  BSTree();

  ~BSTree();

  bool Insert(int content);

  void Clear();

  unsigned int GetSize() const;

  string InOrder();

 private:
  bool Insert(int content, BSTNode*& subroot);

  void Clear(BSTNode*& subroot);

  string InOrder(BSTNode* subroot);

  BSTNode* root_;
  unsigned int size_;
};
// Rest of Header Guard
#endif
