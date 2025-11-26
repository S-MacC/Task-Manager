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
    Task(string names, string due, string desc, string progress, string user);
    void NewTask(){
        std::cout << "Enter Task Name: ";
        getline(std::cin, name);
        std::cout << "Enter Task Description: ";
        getline(std::cin, description);
        std::cout << "Enter Task Due Date: ";
        getline(std::cin, due_date);
        std::cout << "Enter Task Status: ";
        getline(std::cin, progress_status);
        std::cout << "Enter Task User: ";
        getline(std::cin, user);
        
    }
    void printDetails(){
    std::cout <<"Task Name: " << name <<std::endl;
    std::cout <<"Task Description: " << description <<std::endl;
    std::cout <<"Task Due Date: " << due_date <<std::endl;
    std::cout <<"Task Status: " << progress_status <<std::endl;
    std::cout <<"Task User: " << user <<std::endl;
    std::cout <<std::endl;
    }

    
    ~Task(){};
};