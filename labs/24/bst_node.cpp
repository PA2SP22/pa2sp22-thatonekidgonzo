#include "bst_node.h"

BSTNode::BSTNode() {
  contents_ = 0;
  left_child_ = NULL;
  right_child_ = NULL;
}

BSTNode::BSTNode(int contents) {
  contents_ = contents;
  left_child_ = NULL;
  right_child_ = NULL;
}

BSTNode::~BSTNode() {
  left_child_ = NULL;
  right_child_ = NULL;
}

void BSTNode::SetContents(int content) {
  contents_ = content;
}

int BSTNode::GetContents() const {
  return contents_;
}

int& BSTNode::GetContents() {
  return contents_;
}

void BSTNode::SetLeftChild(BSTNode* child) {
  left_child_ = child;
}

void BSTNode::SetRightChild(BSTNode* child) {
  right_child_ = child;
}

BSTNode* BSTNode::GetLeftChild() const {
  return left_child_;
}

BSTNode*& BSTNode::GetLeftChild() {
  return left_child_;
}

BSTNode* BSTNode::GetRightChild() const {
  return right_child_;
}

BSTNode*& BSTNode::GetRightChild() {
  return right_child_;
}
