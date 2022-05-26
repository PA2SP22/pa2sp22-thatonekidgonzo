#include "todo_ui.h"


TodoUI::TodoUI() {
  list_ = new TodoList();
}

TodoUI::~TodoUI() {
 //list_->~TodoList();
  //delete list_;
  
}

void TodoUI::Menu() {
  CinReader reader;
  cout << "Hello Welcome to the Build-A-List-3000" << endl
  << "To start this program please press S to start: ";
  user_start = reader.readChar("Ss");
  user_choice = 0;
  while (user_choice != 7) {
  cout << "OPTIONS" << endl << "1: Create an item" << endl <<
  "2: Edit an item" << endl << "3: View  all items" << endl <<
  "4: View specific item" << endl << "5: Delete item" << endl <<
  "6: Delte all items" << endl << "7: Exit" << endl;
  user_choice = reader.readInt(1, 7);
  switch (user_choice) {
    case 1:
     CreateItem();
     break;
    case 2:
     EditItem();
     break;
    case 3:
     ViewAll();
     break;
    case 4:
     EditItem();
     break;
    case 5:
     Delete();
     break;
    case 6:
     DeleteAll();
     break;
  }
  }
}

void TodoUI::CreateItem() {
  CinReader reader;
  string name_;
  int priority_;
  bool completed = false;
  cout << "What is the name of this item: ";
  name_ = reader.readString();
  cout << "Choose a priority from 1-5: ";
  priority_ = reader.readInt(1, 5);
  list_->AddItem(new TodoItem(name_, priority_, completed));
  cout << "Your item has been added" << endl;
}

void TodoUI::EditItem() {
  CinReader reader;
  int edit_choice = 0;
  string name;
  int location = 0;
  int priority = 0;
  char status;
  TodoItem* temp;
  while (edit_choice != 6) {
   cout << "Options" << endl << "1: Choose Item" << endl << 
   "2: Edit Name" << endl << "3: Edit Priority" << endl << 
   "4: Edit Completion Status" << endl << "5: Display" << endl
   << "6: Exit" << endl << "";
   edit_choice = reader.readInt(1, 6);
   switch (edit_choice) {
     case 1:
      cout << list_->ToFile() << endl; 
      cout << "Please enter the position of the item you would like to choose: ";
      location = reader.readInt(1, list_->GetSize());
      temp = list_->GetItem(location);
      name = temp->description();
      cout << "You have chosen " << name << endl;
      // EditItem();
      break;
    case 2: 
     cout << "Change Name to: ";
     name = reader.readString(false);
     temp->set_description(name);
     cout << "Name has been changed" << endl;
     // EditItem();
     break;
    case 3: 
     cout << "Change Priority to: ";
     priority = reader.readInt(1, 5);
     temp->set_priority(priority);
     cout << "Priority has been changed" << endl;
     // EditItem();
     break;
    case 4:
     cout << "Change Completion Status:(T,F): ";
     status = reader.readChar("TtFf");
      if (status == 't' || 'T') {
        temp->set_completed(true);
        cout << "Status has been changed" << endl;
        // EditItem();
      }
      temp->set_completed(false);
      cout << "Status has been changed" << endl;
      // EditItem();
      break;
      case 5:
      stringstream ss;
      ss << temp->description();
      cout << ss.str(); 
      break;
   }
  }
}

void TodoUI::ViewAll() {
  
  
}

string TodoUI::View(unsigned int location) {
  return "";
}

void TodoUI::Delete() {
  
}

void TodoUI::DeleteAll() {
  
}