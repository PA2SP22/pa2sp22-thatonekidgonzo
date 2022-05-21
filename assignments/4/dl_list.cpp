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
  
}

void DLList::PushFront(int content) {
   if (size_ == 0) {
     DLNode* nn = new DLNode();
     nn->SetContents(content);
     head_ = nn;
     tail_ = nn;
     size_++;
   } else {
     DLNode* nn = new DLNode();
     nn->SetContents(content);
     nn->SetNext(head_);
     head_ = nn;
     size_++;
   }
}

void DLList::PushBack(int content) {
  if (size_ == 0) {
    DLNode* nn = new DLNode();
     nn->SetContents(content);
     head_ = nn;
     tail_ = nn;
     size_++;
  } else {
    DLNode* nn = new DLNode();
    nn->SetContents(content);
    nn->SetPrevious(head_);
    tail_ = nn;
    size_++;
  }
}

unsigned int DLList::GetSize() const {
  return size_;
}


int DLList:: GetFront() const{
  if (head_ == NULL) {
    cerr << "List Empty";
  return 0;
}
  return head_->GetContents();
}

int DLList::GetBack() const{
  if (head_ == NULL) {
    cerr << "List Empty";
  return 0;
}
  return tail_->GetContents();
}

void DLList::PopFront() {
  if (head_ == NULL) {
   cerr << "List Empty";
  } else {
  DLNode* nn = head_->GetNext();
  delete head_;
  head_ = nn;
  size_--;
  }
}

void DLList::PopBack() {
  if (head_ == NULL) {
    cerr << "List Empty";
  } else {
  DLNode* nn = tail_->GetPrevious();
  delete tail_;
  tail_ = nn;
  size_ --;
}
}

void DLList::RemoveFirst(int to_find) {
  if (head_ != NULL) {
  for (DLNode* it = head_; it != NULL; it = it->GetNext()) {
      if (it->GetContents() == to_find) {
      if (it->GetNext() == NULL) {
        PopBack();
      } else if (it->GetPrevious() == NULL) {
        PopFront();
      } else {
        DLNode* front = new DLNode();
        DLNode* back = new DLNode();
        front = it->GetNext();
        back = it->GetPrevious();
        front->SetPrevious(back);
        back->SetNext(front);
        delete it;
      }
      }
  }
}
      cerr << "Not Found";
}

void DLList::RemoveAll(int to_find) {
  if (head_ != NULL) {
    for (DLNode* it = head_; it != NULL; it = it->GetNext()) {
      if (it->GetContents() == to_find) {
      if (it->GetNext() == NULL) {
        PopBack();
      } else if (it->GetPrevious() == NULL) {
        PopFront();
      } else {
        DLNode* front = new DLNode();
        DLNode* back = new DLNode();
        front = it->GetNext();
        back = it->GetPrevious();
        front->SetPrevious(back);
        back->SetNext(front);
        delete it;
      }
      }
    }
  }
  cerr << "Not Found";
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
    cerr << "List Empty";
    return "";
  } else if (size_ == 1) {
    stringstream ss;
    ss << head_->GetContents();
    std::cout << ss.str() << endl;
    return ss.str();
  } else {
    stringstream ss;
    for (DLNode* it = head_; it != tail_; it = it->GetNext()) {
    ss << it->GetContents() << ", ";
    }
    ss << tail_->GetContents();
    std::cout << ss.str() << endl;
    return ss.str();
  }
}

string DLList::ToStringBackwards() {
  if (size_ == 0) {
    cerr << "List Empty";
    return "";
  } else if (size_ == 1) {
    stringstream ss;
    ss << head_->GetContents();
    return ss.str();
  } else {
    stringstream ss;
    for (DLNode* it = tail_; it != head_; it = it->GetPrevious()) {
      ss << it->GetContents() << ",";
    }
    ss << head_->GetContents();
    return ss.str();
  }
}
