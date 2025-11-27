#include <iostream>
#include <string>
#include "Task.h"
#include "User.h"
using namespace std;
int b{};
int x{};
int main(){
cout <<"Welcome to the Task Manager!" <<endl;
cout <<"Select an account-enter a number 1-5:" <<endl;//This needs to be revised
cin >> x ; 
switch(x){//user selection
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
    User emp[5]; //array of users
    Task foo[1000];//array of tasks
    int n, i;
    emp[x].getdata();//getting user account creation
    //need to add a way to check if account exists
  //use this for login maybe











for(int i{}; i<1; ){//looping the switch statement
    
cout <<"Select an option: 1 to view all tasks, 2 to add a task, 3 to view urgent tasks and 4 to exit"<<endl;
cin >> x ; 
switch(x){
    case 1://see statement below
    break;
    case 2://see statement below
    b++;//updating total number of tasks
    cout <<"Add Task"<<endl;
    break;
    case 3:
    cout <<"View Urgent Tasks"<<endl;//no functionality. Will change to edit tasks
    break;
    case 4://exit
    {
    i=i+1;
    }
    break;
    default:
    cout << "Please Choose a Valid option"<<endl;
    break;
}
if (x==1){//view tasks(function can be found in task.h)
       for(int q{1};q<=b;q++)
    foo[q].putdata();
}
else if(x==2){//add tasks(function can be found in task.h)
  foo[b].getdata();  
}
//Urgent();



}

return 0;

}
//This is currently a test function