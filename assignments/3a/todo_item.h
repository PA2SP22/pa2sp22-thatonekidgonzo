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
TodoItem();

//constructor #2
TodoItem(string description = "", int priority = 1, bool completed = false);
   
//Accessor #1
string description() const;

//Accessor #2
int priority() const;

//Accessor #3
bool completed() const;

//Mutator #1
void set_description(string description);
//Mutator #2

void set_priority(int priority);

//Mutator #3
void set_completed(bool completed);

  
//Member Func #1  
string ToFile(); 
  
  private:
  string description_;
  int priority_;
  bool completed_;
//Private Member Function #1   
string Scrub(string to_decode);
};





//Rest of Header Guard
#endif