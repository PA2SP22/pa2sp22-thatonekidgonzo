/*
 * Name        : Tree Lab
 * Author      : Gonzalo Garcia
 * Description : Tree Lab
 */

#include <iomanip>

  // Header Guard
#ifndef GARCIA_TREE_LAB_
#define GARCIA_TREE_LAB_

class BSTNode {
 public:
// contructor
  BSTNode();

  BSTNode(int contents);

// destructor
  ~BSTNode();

void SetContents(int content);

int GetContents() const;

int& GetContents();

void SetLeftChild(BSTNode* child);

void SetRightChild(BSTNode* child);

BSTNode* GetLeftChild() const;

BSTNode*& GetLeftChild();

BSTNode* GetRightChild() const;

BSTNode*& GetRightChild();

 private:
  BSTNode* left_child_;
  BSTNode* right_child_;
  int contents_;
};

// Rest of Header Guard
#endif
