#include "todo_list.h"

// Class Func here //

// Constructor #1 //
TodoList::TodoList() {
  cap_ = 25;
  size_ = 0;
  list_ = new TodoItem*[cap_];
  for (unsigned int i = 0; i < cap_; i++) {
   list_[i] = NULL;
  }
}

// Destructor #1 //
TodoList::~TodoList() {
  for (unsigned int i = size_; i > 0; i--) {
  delete list_[i];    
    }
  delete[] list_;  
}

// Mem Func #1 //
void TodoList::AddItem(TodoItem* item) {
  if (size_ == cap_) {
    IncreaseCap();
  } else {
    list_[size_] = item;
    size_++;
  }
  
}
// Mem Func #2 //
void TodoList::DeleteItem(unsigned int location) {
  // Luke: Remember location is human readable. So we need to -1 to it
    if (location <= (size_) && location > 0) {
      delete list_[location - 1];
    for (unsigned int i = location - 1; i < (size_ - 1); i++) {
      list_[i] = list_[i + 1];
    }
    list_[size_ - 1] = NULL;
    size_--;
    } 
}

// Mem Func #3 //
TodoItem* TodoList::GetItem(unsigned int location) {
    if (location <= (size_) && location > 0) {
      return list_[location - 1];
    } else {
      return NULL;
    }
}

// Mem Func #4 //
unsigned int TodoList::GetSize() {
   return size_; 
}

// Mem Func #5 //
unsigned int TodoList::GetCapacity() {
    return cap_;
}

// Mem Func #6 //
void TodoList::Sort() {
    
}

// Mem Func #7 //
string TodoList::ToFile() {
  stringstream ss;
  for (unsigned int i = 0; i < size_; i++) {
    ss << list_[i]->ToFile() << endl;
  }
  return ss.str();
}

// Overloaded //
std::ostream &operator <<(std::ostream &output, const TodoList &item) {
   //return output << item;
   return output;
}

// Private Func #1 //
void TodoList::IncreaseCap() {
    
}

// Private Func #2 //
void TodoList::Compact() {
    
}
