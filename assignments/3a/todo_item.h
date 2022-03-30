/*
 * Name        : todo_item.h
 * Author      : Gonzalo Garcia
 * Description : To do list.
 */
#include <iomanip>
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

//Header Guard
#ifndef GARCIA_TO_DO_
#define GARCIA_TO_DO_


class TodoItem {
  public:
  
//constructor #1
  TodoItem(string description, int priority, bool completed)
   : description_(description)
    priority_(priority)
    completed_(comleted) {
  }
  
//Accessor #1
string GetTodoItem() {
  return description_;
}

//Accessor #2
int GetTodoItem() {
  return priority_;
}

//Accessor #3
bool GetTodoItem() {
  return completed_;
}

//Mutator #1
void SetTodoItem(string description) {
  description_ = description;
}

//Mutator #2
void SetTodoItem(int priority) {
  priority_ = priority;
}

//Mutator #3
void SetTodoItem(bool completed) {
  completed_ = completed;
}

  
//Member Func #1  
  string ToFile();
  
  private:
  string description_;
  int priority_;
  bool completed_;
//Private Member Function #1   
  string Scrub(); 
};





//Rest of Header Guard
#endif