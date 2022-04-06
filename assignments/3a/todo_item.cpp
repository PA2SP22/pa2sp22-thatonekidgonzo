#include "todo_item.h"

// Class Functions here
// get #1
string TodoItem::description() const {
  return description_;
}
// get #2
int TodoItem::priority() const {
  return priority_;
}
// get #3
bool TodoItem::completed() const {
  return completed_;
}
// set #1
void TodoItem::set_description(string description) {
  description_ = description;
}
// set#2
void TodoItem::set_priority(int priority) {
  if (priority > 5 || priority < 1) {
    priority = 5;
  }
  priority_ = priority;
}
// set#3
void TodoItem::set_completed(bool completed) {
  completed_ = completed;
}

string TodoItem::ToFile() {
  std::stringstream ss;
  char spacer = '@';
  for (unsigned int i = 0; i < description_.length(); i++) {
    if (description_.at(i) == '@') {
      ss << '`';
    } else {
      ss << description_.at(i);
    }
  }
  ss << spacer;
  ss << priority_;
  ss << spacer;
  ss << completed_;
  return ss.str();
}

string TodoItem::Scrub(string to_decode) {
  std::stringstream ss;
  char old_spacer = '@';
  char new_spacer = '`';

  for (unsigned int i = 0; i < to_decode.length(); i++) {
    if (to_decode.at(i) != old_spacer) {
      ss << to_decode.at(i);
    } else {
      ss << new_spacer;
    }
  }
  return ss.str();
}
// constructor
TodoItem::TodoItem(string description, int priority, bool completed) {
  set_description(description);
  set_priority(priority);
  set_completed(completed);
}

