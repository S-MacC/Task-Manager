#include <iostream>
#include <string>
#include <algorithm>
#include "Task.h"
#include "User.h"
#include <windows.h>
#include <vector>
#define underline "\033[4m"

using namespace std;
int total{};
int x{};
int usernum{};
extern string store_user;

size_t get_longest_text(const std::vector<std::string>& lines)
{
    size_t ret = 0;
    for (auto& line : lines)
    {
        if (line.size() > ret)
        {
            ret = line.size();
        }
    }
    return ret;
}

void print_border_top_or_bottom_line(size_t longest_text)
{
    for (size_t i = 0; i < longest_text + 4; ++i)
    {
        std::cout << "*";
    }
    std::cout << "\n";
}

void print_second_top_or_second_bottom_line(size_t longest_text)
{
    std::cout << "*";
    for (size_t i = 0; i < longest_text + 2; ++i)
    {
        std::cout << " ";
    }
    std::cout << "*";
    std::cout << "\n";
}

void print_line(const std::string& text, size_t longest_text)
{
    std::cout << "*";
    std::cout << " ";
    std::cout << text;
    std::cout << std::string(longest_text + 1 - text.size(), ' ');
    std::cout << "*";
    std::cout << "\n";
}

void print_lines_with_border(const std::vector<std::string>& lines)
{
    size_t longest_text = get_longest_text(lines);
    print_border_top_or_bottom_line(longest_text);
    print_second_top_or_second_bottom_line(longest_text);
    for (auto& line : lines)
    {
        print_line(line, longest_text);
    }
    print_second_top_or_second_bottom_line(longest_text);
    print_border_top_or_bottom_line(longest_text);
}



int main(){
  string name;
  cout << "Enter your name: "<<endl;
  cin>> name;

  HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,4);
    std::vector<std::string> lines{name};
    print_lines_with_border(lines);
    cout << "\n";
    SetConsoleTextAttribute(h,2);
    print_lines_with_border(lines);
cout <<underline<<"Welcome to the Task Manager!" <<endl;
    SetConsoleTextAttribute(h,2);
cout <<"Select an account-enter a number 1-5:" <<endl;//This needs to be revised
cin >> usernum ; 
  switch(usernum){//user selection
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
  
    User user[5]; //array of users
    Task task[10000];//array of tasks
    int n, i;
    user[x].getdata();//getting user account creation
    //need to add a way to check if account exists
  //use this for login maybe
  string store_user = user[usernum].getuser();
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
    for(int i{1};i<=total;i++){
    cout<<"Number: "<<i<<endl;
    task[i].putdata();
    }
  }
  else if(x==2){//add tasks(function can be found in task.h)
  total++;
  task[total].getdata(); 
  }
//Urgent();


if (x==3){
   int num{};
   int choice{};
    string input;
    cout <<"Edit Tasks"<<endl;//no functionality. Will change to edit tasks
    cout <<"Enter a number"<<endl;//using numbers as a referencing tool
    cin >>num;
    cout <<"What do you want to change"<<endl;
    cout <<"1. Name"<<endl;
    cout <<"2. Description"<<endl;
    cout <<"3. Due date"<<endl;
    cout <<"4. Status"<<endl;
    cout <<"5. Mark as complete"<<endl;
    cin>>choice;
    switch(choice){
      case 1:
      cout <<"Current name is"<<task[num].getname()<<". Please enter your new name"<<endl;
      task[num].setname();
      break;
      case 2:
      cout <<"Current description is"<<task[num].getdescription()<<". Please enter your new description"<<endl;
      getline(cin,input);
      task[num].setdescription();
      break;
      case 3:
      cout <<"Current due date is"<<task[num].getdue()<<". Please enter your new duedate"<<endl;
      getline(cin,input);
      task[num].setdue();
      break;
      case 4:
      cout <<"Current status is"<<task[num].getstatus()<<". Please enter your new status"<<endl;
      getline(cin,input);
      task[num].setstatus();
      break;
      case 5:
      cout <<"Are you sure you want to mark "<<task[num].getstatus()<<" as complete. Doing so will delete all instances of this task"<<endl;
      int sure{};
      cin>>sure;
        if (sure==1)
        {
          task[num].markcomplete();
          {
            for(int i{num};i<total;i++)
            {
            swap(task[i],task[i+1]);
            
            
            }
            total--;
          }
        }
        else
        {
          cout<<"Your task was not deleted"<<endl;
        }
      
    }
  }
}


return 0;
  
}
//This is currently a test function