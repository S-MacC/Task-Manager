#include <string>
#include <iostream>
using std::string;
using std::cin;
using std::cout;
using std::endl;
class Task {
    private:
    string due_date; //task due date
    string description; //small description of tasks
    string name; //Name given to tasks
    string progress_status; // Is project started, in progress etc
    string user; //The user associated with a task
    public:// See user.h for the public section
   // Declaration of function
  void getdata();
  
  // Declaration of function
  void putdata();
};
void Task::getdata()
{ 
  cout << "Enter task name : ";
  cin >> name;
  cout << "Enter task description : ";
  cin >> description;
    cout << "Enter task due date: ";
  cin >> due_date;
    cout << "Enter task status : ";
  cin >> progress_status;
    cout << "Enter task user : ";
  cin >> user;
}

// Defining the function outside 
// the class
void Task::putdata()
{
  cout << name << " ";
  cout << description << " ";
  cout << due_date << " ";
  cout << progress_status << " ";
  cout << user << " ";
  cout << endl;
}