#include <string>
#include <cstring>
#include <iostream>
#include <sstream>

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
  void setname(const string &n){name=n;};
  string getname(){return name;};
  void setdescription(const string &d){description=d;};
  string getdescription(){return description;};
  void setdue(const string &du){due_date=du;};
  string getdue(){return due_date;};
  void setstatus(const string &s){progress_status=s;};
  string getstatus(){return progress_status;};
  string getuser(){return user;};
  void setuser(const string &u){ user = u; };
  string test();


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
void Task::putdata()//output
{
  cout <<"Name: "<< name << " "<<endl;
  cout <<"Description: "<< description << " "<<endl;
  cout <<"Due: "<< due_date << " "<<endl;
  cout <<"Status: "<< progress_status << " "<<endl;
  cout <<"User: "<< user << " "<<endl;
  
  cout << endl;
  
}

void Task::markcomplete()
{
  name.clear();
  description.clear();
  due_date.clear();
  progress_status.clear();
  user.clear();

}
string Task::test(){
    string con;
 con = "Name: "+name+"| Description: "+description+"| Due date: "+due_date+"| Status"+progress_status;  
 return con ;
}

/* Serialize task to a single line: name|description|due_date|progress_status|user
string Task::serialize() {
    std::ostringstream os;
    os << name << '|' << description << '|' << due_date << '|' << progress_status << '|' << user;
    return os.str();
}

// Deserialize from a line. Returns true on success.
bool Task::deserialize(const string &line) {
    std::istringstream is(line);
    if (!std::getline(is, name, '|')) return false;
    std::getline(is, description, '|');
    std::getline(is, due_date, '|');
    std::getline(is, progress_status, '|');
    std::getline(is, user);
    return true;
}*/