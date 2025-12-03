#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include "Task.h"
#include "User.h"
using namespace std;
int total{};
int x{};
int usernum{};
User user[6]; //array of users
Task task[10000];//array of tasks
User test;
ofstream otaskfile;
ofstream ouserfile;
extern string store_user;
int cntr{1};
int main(){

cout <<"Welcome to the Task Manager!" <<endl;
cout <<"Select an account-enter a number 1-5:" <<endl;//This needs to be revised
ifstream iuserfile;
iuserfile.open("u.txt",ios::app);
    if(iuserfile.is_open())
    {
        string line;
        int cnt2{};
        while(getline(iuserfile, line))
        {
            
        if(cnt2==0){
            user[cntr].setuser(line);
            cnt2++;
        }
        else{
            user[cntr].setpassword(line);
            cnt2=0;
            cntr++;  
        }   
        
        }
      
      iuserfile.close();
    }
    for(int i{1};i<6;i++){
      cout<<i<<user[i].getuser()<<endl;;
    }
    ifstream itaskfile;
itaskfile.open("t.txt",ios::app);
    if(itaskfile.is_open())
    {
        cntr==0;
        string line;
        int cnt2{};
        while(getline(itaskfile, line))
        {
            
        if(cnt2==0){
            total++;
            task[total].setname(line);
            cnt2++;
        }
        else if(cnt2==1){
            task[total].setdescription(line);
            cnt2++; 
        }   
        else if(cnt2==2){
        task[total].setdue(line);
        cnt2++; 
        } 
        else if(cnt2==3){
        task[total].setstatus(line);
        cnt2++; 
        } 
        else if(cnt2==4){
        task[total].setuser(line);
        cnt2=0; 
        } 
        }
      
      itaskfile.close();
    }

cin >> usernum ; 
  
  for (int i{};i<1;){
   string temp = user[usernum].getuser();
   if(temp.empty())
   {
    cout<<"Please create user";
    user[usernum].getdata();
  
  }
  else if(!temp.empty())
  {
    cout<<"Logging in "<<user[usernum].getuser()<<"Enter password";
    string password;
    string temppass=user[usernum].getpassword();
    cin >>password;
    if(password==temppass){i++;}
    else{cout<<"Wrong Password";}
  }
  }
  
    
    int n, i;
    //getting user account creation
    //need to add a way to check if account exists
  //use this for login maybe
  string store_user = user[usernum].getuser();
  user[usernum].putdata();
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
    for(int i{1};i<=total-1;i++){
    if(task[i].getuser()==store_user){
    cout<<"Number: "<<i<<endl;
    task[i].putdata();
        
    }
  }
}
  else if(x==2){//add tasks(function can be found in task.h)
  
  task[total].getdata();
  string name = user[usernum].getuser();
  task[total].setuser(name);
  for(int i{1};i<=total;i++)
  {
otaskfile.open("t.txt",ios::app);
if(otaskfile.is_open())
    {
    otaskfile<<task[i].getname()<<""<<endl;
    otaskfile<< task[i].getdescription()<<""<<endl;
    otaskfile<< task[i].getdue()<<""<<endl;
    otaskfile<<task[i].getstatus() << "" <<endl;
    otaskfile<<user[i].getuser()<<""<<endl;
    otaskfile.close();
    }
  
    else
    {
      cout<< "bad"<<endl;
    }
  }
  total++;
  
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
      getline(cin,input);
      getline(cin,input);
      task[num].setname(input);
      remove("t.txt");
      for(int i{1};i<=total;i++)
      {
      otaskfile.open("t.txt",ios::app);
      if(otaskfile.is_open())
        {
        otaskfile<<task[i].getname()<<""<<endl;
        otaskfile<< task[i].getdescription()<<""<<endl;
        otaskfile<< task[i].getdue()<<""<<endl;
        otaskfile<<task[i].getstatus() << "" <<endl;
        otaskfile<<user[i].getuser()<<""<<endl;
        otaskfile.close();
        }
        else
        {
        cout<< "bad"<<endl;
        }
      }
      break;
      case 2:
      cout <<"Current description is"<<task[num].getdescription()<<". Please enter your new description"<<endl;
      getline(cin,input);
      task[num].setdescription(input);
            remove("t.txt");
      for(int i{1};i<=total;i++)
      {
      otaskfile.open("t.txt",ios::app);
      if(otaskfile.is_open())
        {
        otaskfile<<task[i].getname()<<""<<endl;
        otaskfile<< task[i].getdescription()<<""<<endl;
        otaskfile<< task[i].getdue()<<""<<endl;
        otaskfile<<task[i].getstatus() << "" <<endl;
        otaskfile<<user[i].getuser()<<""<<endl;
        otaskfile.close();
        }
        else
        {
        cout<< "bad"<<endl;
        }
      }
      break;
      case 3:
      cout <<"Current due date is"<<task[num].getdue()<<". Please enter your new duedate"<<endl;
      getline(cin,input);
      task[num].setdue(input);
            remove("t.txt");
      for(int i{1};i<=total;i++)
      {
      otaskfile.open("t.txt",ios::app);
      if(otaskfile.is_open())
        {
        otaskfile<<task[i].getname()<<""<<endl;
        otaskfile<< task[i].getdescription()<<""<<endl;
        otaskfile<< task[i].getdue()<<""<<endl;
        otaskfile<<task[i].getstatus() << "" <<endl;
        otaskfile<<user[i].getuser()<<""<<endl;
        otaskfile.close();
        }
        else
        {
        cout<< "bad"<<endl;
        }
      }
      break;
      case 4:
      cout <<"Current status is"<<task[num].getstatus()<<". Please enter your new status"<<endl;
      getline(cin,input);
      task[num].setstatus(input);
            remove("t.txt");
      for(int i{1};i<=total;i++)
      {
      otaskfile.open("t.txt",ios::app);
      if(otaskfile.is_open())
        {
        otaskfile<<task[i].getname()<<""<<endl;
        otaskfile<< task[i].getdescription()<<""<<endl;
        otaskfile<< task[i].getdue()<<""<<endl;
        otaskfile<<task[i].getstatus() << "" <<endl;
        otaskfile<<user[i].getuser()<<""<<endl;
        otaskfile.close();
        }
        else
        {
        cout<< "bad"<<endl;
        }
      }
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
                  remove("t.txt");
      for(int i{1};i<=total;i++)
      {
      otaskfile.open("t.txt",ios::app);
      if(otaskfile.is_open())
        {
        otaskfile<<task[i].getname()<<""<<endl;
        otaskfile<< task[i].getdescription()<<""<<endl;
        otaskfile<< task[i].getdue()<<""<<endl;
        otaskfile<<task[i].getstatus() << "" <<endl;
        otaskfile<<user[i].getuser()<<""<<endl;
        otaskfile.close();
        }
        else
        {
        cout<< "bad"<<endl;
        }
      }
          }
        }
        else
        {
          cout<<"Your task was not deleted"<<endl;
        }
      
    }
  }
}

      remove("t.txt");
      for(int i{1};i<=total;i++)
      {
      otaskfile.open("t.txt",ios::app);
      if(otaskfile.is_open())
        {
        otaskfile<<task[i].getname()<<""<<endl;
        otaskfile<< task[i].getdescription()<<""<<endl;
        otaskfile<< task[i].getdue()<<""<<endl;
        otaskfile<<task[i].getstatus() << "" <<endl;
        otaskfile<<user[i].getuser()<<""<<endl;
        otaskfile.close();
        }
        else
        {
        cout<< "bad"<<endl;
        }
      }

return 0;
  
}
//This is currently a test function
void save()
{
remove("t.txt");
for(int i{1};i<=total;i++)
  {
otaskfile.open("t.txt",ios::app);
if(otaskfile.is_open())
    {
 otaskfile<<task[i].getname()<<""<<endl;
 otaskfile<< task[i].getdescription()<<""<<endl;
 otaskfile<< task[i].getdue()<<""<<endl;
 otaskfile<<task[i].getstatus() << "" <<endl;
 otaskfile<<user[i].getuser()<<""<<endl;
otaskfile.close();
    }
  
    else
    {
      cout<< "bad"<<endl;
    }
  }
}