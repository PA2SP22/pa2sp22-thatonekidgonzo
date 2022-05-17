#include "bs_tree.h"


  BSTree::BSTree() {
  size_ = 0;
  root_ = NULL;
  }

  BSTree::~BSTree() {
  Clear();
  }

  bool BSTree::Insert(int content) {
  return Insert(content, root_);
  }

  void BSTree::Clear() {
  Clear(root_);
  }

  unsigned int BSTree::GetSize() const {
  return size_;
  }

  string BSTree::InOrder() {
  return InOrder(root_);
  }
  // PRIVATE

  bool BSTree::Insert(int content, BSTNode*& subroot) {
  if (subroot == NULL) {
     subroot = new BSTNode(content);
     size_++;
     return true;
     // i have to access the root_ with and accessor
  } else if (subroot->GetContents() > content) {
     return Insert(content, subroot->GetLeftChild());
  } else if (subroot->GetContents() < content) {
     return Insert(content, subroot->GetRightChild());
  }
     return false;
  }

  void BSTree::Clear(BSTNode*& subroot) {
  if (subroot != NULL) {
     if (subroot->GetLeftChild() != NULL) {
     Clear(subroot->GetLeftChild());
  }
     if (subroot->GetRightChild() != NULL) {
       Clear(subroot->GetRightChild());
  }
     subroot = NULL;
     delete subroot;
  }
    size_ = 0;
  }

  string BSTree::InOrder(BSTNode* subroot) {
  std::stringstream ss;
    if (subroot != NULL) {
        ss << InOrder(subroot->GetLeftChild());
        ss << subroot->GetContents() << " ";
        ss << InOrder(subroot->GetRightChild());
    }
    return ss.str();
  }

