#include "dl_list.h"

// Constructor
DLList::DLList() {
  size_ = 0;
  head_ = NULL;
  tail_ = NULL;
}
// Destructor
DLList::~DLList() {
  Clear();
}
// Clearing
void DLList::Clear() {
  for (unsigned int i = size_; i > 0; i--) {
    PopBack();
  }
  head_ = NULL;
}

void DLList::PushFront(int content) {
  if (size_ == 0) {
     DLNode* nn = new DLNode();
     nn->SetContents(content);
     tail_ = nn;
     head_ = nn;
     size_++;
  } else if (size_ > 0) {
     DLNode* nn = new DLNode();
     nn->SetContents(content);
     nn->SetNext(head_);
     head_->SetPrevious(nn);
     head_ = nn;
     size_++;
  }
}

void DLList::PushBack(int content) {
  if (size_ == 0) {
    PushFront(content);
  } else if (size_ > 0) {
    DLNode* nn = new DLNode();
    nn->SetContents(content);
    nn->SetPrevious(tail_);
    tail_->SetNext(nn);
    tail_ = nn;
    size_++;
  }
}

unsigned int DLList::GetSize() const {
  return size_;
}


int DLList:: GetFront() const {
  if (head_ == NULL) {
    std::cerr << "List Empty";
  return 0;
}
  return head_->GetContents();
}

int DLList::GetBack() const {
  if (head_ == NULL) {
    std::cerr << "List Empty";
  return 0;
}
  return tail_->GetContents();
}

void DLList::PopFront() {
  if (size_ == 0) {
  std::cerr << "List Empty";
  } else if (size_ == 1) {
     delete head_;
     head_ = tail_ = NULL;
     size_--;
  } else {
    DLNode* it;
    it = head_->GetNext();
    delete head_;
    head_ = it;
    size_--;
  }
}

void DLList::PopBack() {
  if (size_ == 0) {
    std::cerr << "List Empty";
  } else if (size_ == 1) {
    PopFront();
  } else {
    DLNode* it = tail_->GetPrevious();
    delete tail_;
    tail_ = it;
    tail_->SetNext(NULL);
    size_--;
  }
}

void DLList::RemoveFirst(int to_find) {
  if (size_ == 0) {
    std::cerr << "Not Found";
  } else {
    // Search for the value
    DLNode *it = head_;
    while (it != NULL && it->GetContents() != to_find) {
      it = it->GetNext();
    }
    if (it == NULL) {
      std::cerr << "Not Found";
    } else if (it == head_) {
      PopFront();
    } else if (it == tail_) {
      PopBack();
    } else {
      DLNode* front;
      DLNode* back;
      front = it->GetNext();
      back = it->GetPrevious();
      front->SetPrevious(back);
      back->SetNext(front);
      delete it;
      size_--;
    }
  }
}

void DLList::RemoveAll(int to_find) {
  if (size_ == 0) {
    std::cerr << "Not Found";
  } else {
    if (Exists(to_find) == true) {
      for (DLNode* it = head_; it != NULL; it = it->GetNext()) {
        if (it->GetContents() == to_find) {
          if (it == head_) {
            PopFront();
            it = head_;
          } else if (it == tail_) {
            PopBack();
            break;
          } else {
            DLNode* front;
            DLNode* back;
            front = it->GetNext();
            back = it->GetPrevious();
            front->SetPrevious(back);
            back->SetNext(front);
            delete it;
            size_--;
            it = back;
          }
        }
      }
    } else {
      std::cerr << "Not Found";
    }
  }
}

bool DLList::Exists(int to_find) {
  if (head_ != NULL) {
    for (DLNode* it = head_; it != NULL; it = it->GetNext()) {
      if (it->GetContents() == to_find) {
        return true;
      }
    }
    return false;
  }
  return false;
}

string DLList::ToStringForwards() {
  if (size_ == 0) {
    std::cerr << "List Empty";
    return "";
  } else if (size_ == 1) {
    stringstream ss;
    ss << head_->GetContents();
    return ss.str();
  } else {
    stringstream ss;
    for (DLNode* it = head_; it != tail_; it = it->GetNext()) {
    ss << it->GetContents() << ", ";
    }
    ss << tail_->GetContents();
    return ss.str();
  }
}

string DLList::ToStringBackwards() {
  if (size_ == 0) {
    std::cerr << "List Empty";
    return "";
  } else if (size_ == 1) {
    stringstream ss;
    ss << head_->GetContents();
    return ss.str();
  } else {
    stringstream ss;
    for (DLNode* it = tail_; it != head_; it = it->GetPrevious()) {
      ss << it->GetContents() << ", ";
    }
    ss << head_->GetContents();
    return ss.str();
  }
}
