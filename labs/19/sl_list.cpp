#include "sl_list.h"

// Constructor //
SLList::SLList() {
  head_ = NULL;
  tail_ = NULL;
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
  if (head_ == NULL) {
    tail_ = nn;
  }
  head_ = nn;
  }

void SLList::InsertTail(int contents) {
  if (head_ == NULL) {
  InsertHead(contents);
} else {
  SLNode* nn = new SLNode(contents);
  tail_->set_next_node(nn);
  tail_ = nn;
  size_++;
}
}

void SLList::RemoveHead() {
  if (size_ > 0) {
  SLNode* it = head_;
  head_ = head_->next_node();
  delete it;
  size_--;
  }
}

void SLList::RemoveTail() {
  if (size_ == 1) {
    delete tail_;
    tail_ = NULL;
    head_ = NULL;
    size_--;
  } else if (size_ > 1) {
    SLNode* it = head_;
    while (it->next_node() != tail_) {
      it = it->next_node();
      }
      it->set_next_node(NULL);
      delete tail_;
      tail_ = it;
      size_--;
    }
  }

int SLList::GetHead() const {
  if (size_ == 0) {
    return 0;
  } else {
    return head_->contents();
  }
}

int SLList::GetTail() const {
  if (size_ == 0) {
    return 0;
  } else {
    return tail_->contents();
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
