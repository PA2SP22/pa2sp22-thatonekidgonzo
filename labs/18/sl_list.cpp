#include "sl_list.h"

// Constructor //
SLList::SLList() {
  head_ = NULL;
  size_ = 0;
}
// Destructor //
SLList::~SLList() {
  Clear();
}

void SLList::InsertHead(int contents) {
  SLNode* nn = new SLNode();
  size_++;
  // set_contents(int contents)
  nn->set_contents(contents);
  nn->set_next_node(head_);
  head_ = nn;
}


void SLList::RemoveHead() {
  if (size_ > 0) {
  SLNode* it = head_;
  head_ = head_->next_node();
  delete it;
  size_--;
  }
}

void SLList::Clear() {
  if (size_ > 0) {
    SLNode* it = head_;
    while (it != NULL) {
      head_ = head_->next_node();
      delete it;
      size_--;
      it = head_;
    }
  }
}

unsigned int SLList::size() const {
  return size_;
}

string SLList::ToString() const {
  stringstream ss;
  if (head_ == NULL) {
    return "";
  }
  SLNode* it = head_;
  while (it != NULL) {
  if (it->next_node() == NULL) {
     ss << it->contents();
  } else {
     ss << it->contents() << ", ";
  }
  it = it->next_node();
  }
  return ss.str();
}
