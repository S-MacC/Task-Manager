#include <string>
#include <iostream>
using std::string;
class Task {
    private:
    string due_date; //task due date
    string description; //small description of tasks
    string name; //Name given to tasks
    string progress_status; // Is project started, in progress etc
    string user; //The user associated with a task
    public:// See user.h for the public section
    Task();
    Task(string name, string due, string desc, string progress, string user);
    string getName(){return name;};
    void setName(string name);
    string setdescription(string description);
    void getdesc(){string description;};
    string getdate(string due_date);
    void setdate(){string due_date;};
    string getstatus(string progress_status);
    void setName(){string progress_status;};
    string getuser(string user);
    void setName(){string user;};
    ~Task();
};