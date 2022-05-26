/*
 * Name        : dl.node
 * Author      : Gonzalo Garcia
 * Description : node
 */
#include <iomanip>
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

// Header Guard
#ifndef GARCIA_DUAL_LINKED_LIST_NODE_
#define GARCIA_DUAL_LINKED_LIST_NODE_

class DLNode {
 public:
// constructor
DLNode();

// destructor
~DLNode();

void SetContents(int contents);

void SetNext(DLNode* next);

void SetPrevious(DLNode* previous);

int GetContents() const;

DLNode* GetNext() const;

DLNode* GetPrevious() const;
 private:
  DLNode* previous_;
  DLNode* next_;
  int contents_;
};

// Rest of Header Guard
#endif

