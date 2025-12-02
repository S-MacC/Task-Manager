#include <string>
#include <cstring>
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
  void markcomplete();
  // Declaration of function
  void putdata();
  void setname(){getline(cin,name);getline(cin,name);};
  string getname(){return name;};
  void setdescription(){getline(cin,description);};
  string getdescription(){return description;};
  void setdue(){getline(cin,due_date);};
  string getdue(){return due_date;};
  void setstatus(){getline(cin,progress_status);};
  string getstatus(){return progress_status;};
  string getuser(){return user;};
  


};
void Task::getdata()//input
{ 

  cout << "Enter task name : ";
  getline(cin,name);//the getline function is like cin but can accept multiple words
  getline(cin,name);//It's used here for this reason(don't know why but the first getline here doesn't work)
  cout << "Enter task description : ";
  getline(cin,description);
    cout << "Enter task due date: ";
  getline(cin,due_date);
    cout << "Enter task status : ";
  getline(cin,progress_status);
}

// Defining the function outside 
// the class

