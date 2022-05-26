#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "todo_item.h"
using std::string;
using std::stringstream;
using std::ostream;
using std::endl;

// Header Guard
#ifndef GARCIA_TO_DO_LIST_
#define GARCIA_TO_DO_LIST_

class TodoList {
 public:
// Constructor #1 //
TodoList();

// Destructor #1 //
~TodoList();

// Memeber Func #1 //
void AddItem(TodoItem* item);

// Member Func #2 //
void DeleteItem(unsigned int location);

// Memver Func #3 //
TodoItem* GetItem(unsigned int location);

// Member Func #4 //
unsigned int GetSize();

// Member Func #5 //
unsigned int GetCapacity();

// Member Func #6 //
void Sort();

// Member Func #7 //
string ToFile();

// Overloaded Friend operator //
friend std::ostream &operator<<(std::ostream &output, TodoList &item);

 private:
  TodoItem **list_;
  unsigned int cap_;
  unsigned int size_;

// Private  Mem Func #1 //
void IncreaseCap();

// Private Mem Func #2 //
void Compact(unsigned int location);
};

// Rest of Header Guard
#endif
