/*
 * Name        : dl.node
 * Author      : Gonzalo Garcia
 * Description : double linked list
 */
#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>
#include "dl_node.h"
using std::string;
using std::stringstream;


// Header Guard
#ifndef GARCIA_DUAL_LINKED_LIST_
#define GARCIA_DUAL_LINKED_LIST_

class DLList {
 public:
// constructor
DLList();
// destructor
~DLList();

unsigned int GetSize() const;

void PushFront(int content);

void PushBack(int content);

int GetFront() const;

int GetBack() const;

void PopFront();

void PopBack();

void RemoveFirst(int to_find);

void RemoveAll(int to_find);

bool Exists(int to_find);

void Clear();

string ToStringForwards();

string ToStringBackwards();

 private:
  int size_;
  DLNode* head_;
  DLNode* tail_;
};

// Rest of Header Guard
#endif

