#include "dl_list.h"
//#include "dl_node.h"

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
     tail_ = nn;
     head_ = nn;
     size_++;
   } else if (size_ > 0) {
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
  } else if (size_ > 0) {
    DLNode* nn = new DLNode();
    nn->SetContents(content);
    nn->SetPrevious(tail_);
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
  if (size_ == 0) {
   cerr << "List Empty";
  } else if (size_ == 1) {
    head_->SetContents(0);
    tail_->SetContents(0);
    head_ = NULL;
    tail_ = NULL;
    size_--;
  } else {
    DLNode* it = head_->GetNext();
    delete head_;
    it->SetPrevious(NULL);
    head_ = it;
    size_--;
  }
}

void DLList::PopBack() {
  if (size_ == 0) {
    cerr << "List Empty";
  } else if (size_ == 1) {
    head_->SetContents(0);
    tail_->SetContents(0);
    head_ = NULL;
    tail_ = NULL;
    size_--;
  } else {
    DLNode* it = tail_->GetPrevious();
    delete tail_;
    it->SetNext(NULL);
    tail_ = it;
    size_--;
  }
}

void DLList::RemoveFirst(int to_find) {
  if (size_ == 0) {
    cerr << "Not Found";
  } else if (size_ == 1) {
    if (to_find == head_->GetContents()) {
    PopFront();
    } else {
      cerr << "Not Found";
    }
  } else {
    int counter = 0;
   for (DLNode* it = head_; it != NULL; it = it->GetNext()) {
      if (it->GetContents() == to_find && counter == 0) {
      DLNode* front = it->GetNext();
      DLNode* back = it->GetPrevious();
      back->SetPrevious(front);
      front->SetNext(back);
      delete it;
      size_--;
      counter++;
    } 
    }
    if (counter == 0) {
       cerr << "Not Found";
     }
  }
  }

void DLList::RemoveAll(int to_find) {
  if (size_ == 0) {
    cerr << "Not Found";
  } else if (size_ == 1) {
    if (to_find == head_->GetContents()) {
      PopFront();
    } else {
      cerr << "Not Found";
    }
  } else {
    int counter = 0;
    for (DLNode* it = head_; it != NULL; it = it->GetNext()) {
      if (it->GetContents() == to_find) {
      DLNode* front = it->GetNext();
      DLNode* back = it->GetPrevious();
      back->SetPrevious(front);
      front->SetNext(back);
      delete it;
      size_--;
      counter++;
    } 
    }
     if (counter == 0) {
       cerr << "Not Found";
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
