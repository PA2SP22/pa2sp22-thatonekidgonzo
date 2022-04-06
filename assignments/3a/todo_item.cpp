#include "todo_item.h"

//Class Functions here
//get #1
string TodoItem::GetDescription() const {
  return string;
}
//get #2
int TodoItem::GetPriority() const {
  return int;
}
//get #3
bool TodoItem::GetCompleted() const {
  return false;
}
//set #1
void TodoItem::SetDescriptionMod(string description) {
  description_ = description;
}
//set#2
void TodoItem::SetPriorityMod(int priority) {
  priority_ = priority;
}
//set#3
void TodoItem::SetCompletedMod(bool completed) {
  completed_ = completed;
}

string TodoItem::ToFile() {
  return string;
}

string TodoItem::Scrub() {
  return string;
}

TodoItem::TodoItem(string description, int priority, bool completed) {
  
}

