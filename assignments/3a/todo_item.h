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
string GetDescription() const;

//Accessor #2
int GetPriority() const;

//Accessor #3
bool GetCompleted() const;

//Mutator #1
void SetDescriptionMod(string description);
//Mutator #2

void SetPriorityMod(int priority);

//Mutator #3
void SetCompletedMod(bool completed);

  
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