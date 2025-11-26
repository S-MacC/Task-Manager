#include <iostream>
#include <string>
#include "Task.h"
#include "User.h"
using namespace std;
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
if (User.number == 0){
    
})
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
    return 0;
}
//This is currently a test function