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
    string getName(string name);
    ~Task();
};