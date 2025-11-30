#include <string>
#include <iostream>
using std::string;
using std::cin;
using std::cout;
using std::endl;

class Task {
    private:
    int number;
    string due_date; //task due date
    string description; //small description of tasks
    string name; //Name given to tasks
    string progress_status; // Is project started, in progress etc
    string user; //The user associated with a task
    bool complete;
    public:// See user.h for the public section
   // Declaration of function
  void getdata();
  void checkcomp();
  // Declaration of function
  void putdata();
  void setnumber(int b){b=number;};
  int getnumber(){return number;};
  void setname(){getline(cin,name);getline(cin,name);};
  string getname(){return name;};
  void setdescription(){getline(cin,description);};
  string getdescription(){return description;};
  void setdue(){getline(cin,due_date);};
  string getdue(){return due_date;};
  void setstatus(){getline(cin,progress_status);};
  string getstatus(){return progress_status;};
  void setcomplete();
  ~Task();

};
void Task::getdata()//input
{ 
  bool in;
  cout << "Enter task name : ";
  getline(cin,name);//the getline function is like cin but can accept multiple words
  getline(cin,name);//It's used here for this reason(don't know why but the first getline here doesn't work)
  cout << "Enter task description : ";
  getline(cin,description);
    cout << "Enter task due date: ";
  getline(cin,due_date);
    cout << "Enter task status : ";
  getline(cin,progress_status);
  cout << "Enter task completion, true or false : ";
  cin>>std::boolalpha;
  cin>>in;
  complete=in;
}

// Defining the function outside 
// the class
void Task::putdata()//output
{
  cout <<"Number: "<<number<<endl;
  cout <<"Name: "<< name << " "<<endl;
  cout <<"Description: "<< description << " "<<endl;
  cout <<"Due: "<< due_date << " "<<endl;
  cout <<"Status: "<< progress_status << " "<<endl;
  cout <<"Completed: "<< complete << " "<<endl;
  cout << endl;
}
void Task::setcomplete(){
  bool in;
  cin>>std::boolalpha;
  cin>>in;
  complete=in;
}
void Task::getdata(){
  if(complete==true);

}