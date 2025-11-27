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
    cout << "Enter task user : ";
  getline(cin,user);
}

// Defining the function outside 
// the class
void Task::putdata()//output
{
  cout <<"Name: "<< name << " "<<endl;
  cout <<"Description: "<< description << " "<<endl;
  cout <<"Due: "<< due_date << " "<<endl;
  cout <<"Status: "<< progress_status << " "<<endl;
  cout << user << " "<<endl;
  cout << endl;
}