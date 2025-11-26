#include <iostream>
#include <string>
#include "Task.h"
#include "User.h"
using namespace std;
Task::Task(){}

int main(){
int x = 5;
cout <<"Welcome to the Task Manager!" <<endl;
cout <<"Select an account:" <<endl;
cin >> x ; 
switch(x){
    case 1:
    cout <<"User 1 selected"<<endl;
    break;
    case 2:
    cout <<"User 2 selected"<<endl;
    break;
    case 3:
    cout <<"User 3 selected"<<endl;
    break;
    case 4:
    cout <<"User 4 selected"<<endl;
    break;
    case 5:
    cout <<"User 5 selected"<<endl;
    break;
    default:
    cout << "Please Choose a Valid User"<<endl;
    break;
}
//checkuser();
//Add Login Functionality Here
cout <<"Select an option: 1 to view all tasks, 2 to add a task and 3 to view urgent tasks"<<endl;
cin >> x ; 
switch(x){
    case 1:
    cout <<"View Current Tasks"<<endl;
    break;
    case 2:
    cout <<"Add Task"<<endl;
    break;
    case 3:
    cout <<"View Urgent Tasks"<<endl;
    break;
    default:
    cout << "Please Choose a Valid option"<<endl;
    break;
}
Task studentArray[2];
if (x == 2){    for (int i = 0; i < 2; i++)
    {
        cout << "Enter details for task: " << endl;
        studentArray[i].NewTask();
    }
}
else if (x == 1){

    cout << "You have entered : " << endl;
    for (int i = 0; i < 2; i++)
    {
        studentArray[i].printDetails();
    }
//Create_Task();
//Urgent();
    
}
return 0;
}
//This is currently a test function