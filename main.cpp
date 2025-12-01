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
    Task foo[10000];//array of tasks
    int n, i;
    emp[x].getdata();//getting user account creation
    //need to add a way to check if account exists
  //use this for login maybe











for(int i{}; i<1; ){//looping the switch statement
  cout <<"Select an option: 1 to view all tasks, 2 to add a task, 3 to edit tasks and 4 to exit"<<endl;
  cin >> x ; 
    switch(x){
    case 1://see statement below
    break;
    case 2://see statement below
              //updating total number of tasks
    cout <<"Add Task"<<endl;
    break;
    case 3:
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
  b++;
  foo[b].getdata(); 
  foo[b].setnumber(b);
  foo[b].getnumber();
  }
//Urgent();


if (x==3){
   int num{};
   int choice;
    string input;
    cout <<"Edit Tasks"<<endl;//no functionality. Will change to edit tasks
    cout <<"Enter a number"<<endl;//using numbers as a referencing tool
    cin >>num;
    cout <<"What do you want to change"<<endl;
    cout <<"1. Name"<<endl;
    cout <<"2. Description"<<endl;
    cout <<"3. Due date"<<endl;
    cout <<"4. Status"<<endl;
    cin>>choice;
    switch(choice){
      case 1:
      cout <<"Current name is"<<foo[num].getname()<<". Please enter your new name"<<endl;
      foo[num].setname();
      break;
      case 2:
      cout <<"Current description is"<<foo[num].getdescription()<<". Please enter your new description"<<endl;
      getline(cin,input);
      foo[num].setdescription();
      break;
      case 3:
      cout <<"Current due date is"<<foo[num].getdue()<<". Please enter your new duedate"<<endl;
      getline(cin,input);
      foo[num].setdue();
      break;
      case 4:
      cout <<"Current status is"<<foo[num].getstatus()<<". Please enter your new status"<<endl;
      getline(cin,input);
      foo[num].setstatus();
      break;

      
    }
  }
}


return 0;
  
}
//This is currently a test function