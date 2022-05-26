#include "dl_node.h"

DLNode::DLNode() {
  contents_ = 0;
  previous_ = NULL;
  next_ = NULL;
}

// destructor
DLNode::~DLNode() {
}

void DLNode::SetContents(int contents) {
  contents_ = contents;
}

void DLNode::SetNext(DLNode* next) {
  next_ = next;
}

void DLNode::SetPrevious(DLNode* previous) {
  previous_ = previous;
}

int DLNode::GetContents() const {
  return contents_;
}

DLNode* DLNode::GetNext() const {
  return next_;
}

DLNode* DLNode::GetPrevious() const {
  return previous_;
}

