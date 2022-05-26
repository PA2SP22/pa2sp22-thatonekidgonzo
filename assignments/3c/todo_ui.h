/*
 * Name        : todo_item.h
 * Author      : Gonzalo Garcia
 * Description : To do ui.
 */
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "todo_item.h"
#include "todo_list.h"
#include "CinReader.h"
using std::string;
using std::stringstream;
using std::ostream;
using std::endl;

// Header Guard
#ifndef GARCIA_TO_DO_UI
#define GARCIA_TO_DO_UI

class TodoUI {
  public:
  
TodoUI();

~TodoUI();
  
void Menu();

void CreateItem();

void EditItem();

void ViewAll();

string View(unsigned int location);

void Delete();

void DeleteAll();


  private:
  unsigned int location_;
  TodoList* list_;
  char user_start;
  int user_choice;
};


// Rest of Header Guard
#endif
