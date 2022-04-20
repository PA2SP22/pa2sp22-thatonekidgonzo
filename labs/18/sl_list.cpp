#include "sl_list.h"

// Constructor //
SLList::SLList() {
 head_ = NULL;
 size_ = 0;
}
// Destructor //
SLList::~SLList() {
  
}

void SLList::InsertHead(int contents) {
  SLNode* nn = new SLNode();
  nn->set_next_node(head_);
  head_ = nn;
  size_++;
}


void SLList::RemoveHead() {
  
}

void SLList::Clear() {
  
}

unsigned int SLList::size() const {
  return size_;
}

string SLList::ToString() const {
  stringstream ss;
  for (unsigned int i = 0; i < (size_ - 1); i++) {
    ss << "(i + 1),";
  }
  ss << "(size - 1) ";
  return ss.str();
}

