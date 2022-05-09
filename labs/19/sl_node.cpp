#include "sl_node.h"

// Constructor #1
SLNode::SLNode() {
  contents_ = 0;
  next_node_ = (NULL);
}

// Constructor #2
SLNode::SLNode(int contents) {
  contents_ = contents;
  next_node_ = (NULL);
}

// Mutator #1
void SLNode::set_contents(int contents) {
  contents_ = contents;
}

// Mutator #2
void SLNode::set_next_node(SLNode* content) {
  next_node_ = content;
}

//
int SLNode::contents() const {
  return contents_;
}

//
SLNode* SLNode::next_node() const {
  return next_node_;
}

// Destructor
SLNode::~SLNode() {
}
