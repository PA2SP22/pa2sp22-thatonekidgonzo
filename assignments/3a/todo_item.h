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
  TodoItem(string description, int priority, bool completed) {
    description_ = description;
    priority_ = priority;
    completed_ = completed;
  }
  
//Accessor #1
string GetTodoItem();

//Accessor #2
int GetTodoItem();

//Accessor #3
bool GetTodoItem();

//Mutator #1
void SetTodoItem(string description);

//Mutator #2
void SetTodoItem(int priority);

//Mutator #3
void SetTodoItem(bool completed);

  
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