#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include<vector>
#include "Task.h"
#include "User.h"
#include <windows.h>
#define underline "\033[4m"
using namespace std;
int total{};
int x{};
int usernum{};
User user[6]; //array of users
Task task[10000];//array of tasks
User test;
ofstream otaskfile;
ofstream ouserfile;
string store_user;
int cntr{1};


int main(){
 HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleTextAttribute(h,3);  
cout << underline  <<"Welcome to the Task Manager!" <<endl;
cout <<underline <<"Select an account-enter a number 1-5:" <<endl;//This needs to be revised
SetConsoleTextAttribute(h,7);
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
      SetConsoleTextAttribute(h,7);
      cout<<i<<user[i].getuser()<<endl;;
      SetConsoleTextAttribute(h,7);
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
    SetConsoleTextAttribute(h,3);
    cout<<"Please create user"<<endl;
    SetConsoleTextAttribute(h,7);
    user[usernum].getdata();
    cntr++;
  
  }
  else if(!temp.empty())
  {
    SetConsoleTextAttribute(h,3);
    cout<<"Logging in "<<user[usernum].getuser()<<" Enter password"<<endl;
    SetConsoleTextAttribute(h,7);
    string password;
    string temppass=user[usernum].getpassword();
    cin >>password;
    if(password==temppass){i++;}
    else{
      SetConsoleTextAttribute(h,4);
      cout<<"Wrong Password"<<endl;}
      SetConsoleTextAttribute(h,7);
  }
  remove("u.txt");
  for(int i{1};i<=cntr-1;i++)
  {
  ouserfile.open("u.txt",ios::app);
  if(ouserfile.is_open())
    {
    ouserfile<<user[i].getuser()<<""<<endl;
    ouserfile<< user[i].getpassword()<<""<<endl;
    ouserfile.close();
    }
  
    else
    {
      SetConsoleTextAttribute(h,4);
      cout<< "bad"<<endl;
    }
  }
  }
  
    
    int n, i;
    //getting user account creation
    //need to add a way to check if account exists
  //use this for login maybe
  string store_user = user[usernum].getuser();
  user[usernum].putdata();
for(int i{}; i<1; ){//looping the switch statement
  SetConsoleTextAttribute(h,3);
  cout <<"Select an option: 1 to view all tasks, 2 to add a task, 3 to edit tasks and 4 to exit"<<endl;
  SetConsoleTextAttribute(h,7);
  cin >> x ; 
    switch(x){
    case 1://see statement below
    break;
    case 2://see statement below
              //updating total number of tasks
    SetConsoleTextAttribute(h,3);
    cout <<"Add Task"<<endl;
    SetConsoleTextAttribute(h,7);
    break;
    case 3:
    break;
    case 4://exit
      {
      i=i+1;
      }
    break;
    default:
    SetConsoleTextAttribute(h,3);
    cout << "Please Choose a Valid option"<<endl;
    SetConsoleTextAttribute(h,4);
    break;
    }

  if (x==1){//view tasks(function can be found in task.h)
    for(int i{};i<=total;i++){
    if(task[i].getuser()==store_user){
    SetConsoleTextAttribute(h,7);
   cout<<"Number: "<<i<<endl;
    task[i].putdata();
    SetConsoleTextAttribute(h,3);
    cout <<"*****************************************************************************************************"<<endl;
    }
  }
}
  else if(x==2){//add tasks(function can be found in task.h)
  if(total==9999){
    SetConsoleTextAttribute(h,4);
    cout<<"No more tasks";
  SetConsoleTextAttribute(h,7);}
    
  else{
  task[total].getdata();
  string name = user[usernum].getuser();
  task[total].setuser(name);
  otaskfile.open("t.txt",ios::app);
  if(otaskfile.is_open())
    {
    otaskfile<<task[total].getname()<<""<<endl;
    otaskfile<< task[total].getdescription()<<""<<endl;
    otaskfile<< task[total].getdue()<<""<<endl;
    otaskfile<<task[total].getstatus() << "" <<endl;
    otaskfile<<task[total].getuser()<<""<<endl;
    otaskfile.close();
    }
  
    else
    {
      SetConsoleTextAttribute(h,4);
      cout<< "bad"<<endl;
      SetConsoleTextAttribute(h,7);
    }
  
  total++;
  
  }
}
//Urgent();


if (x==3){
   int num{};
   int choice{};
    string input;
    SetConsoleTextAttribute(h,3);
    cout <<"Edit Tasks"<<endl;//no functionality. Will change to edit tasks
    cout <<"Enter a number"<<endl;//using numbers as a referencing tool
    SetConsoleTextAttribute(h,7);
    cin >>num;
    if(task[choice].getuser()==store_user){
      SetConsoleTextAttribute(h,3);
    cout <<"What do you want to change"<<endl;
    cout <<"1. Name"<<endl;
    cout <<"2. Description"<<endl;
    cout <<"3. Due date"<<endl;
    cout <<"4. Status"<<endl;
    cout <<"5. Mark as complete"<<endl;
    SetConsoleTextAttribute(h,7);
    cin>>choice;
    
    switch(choice){
      case 1:
      SetConsoleTextAttribute(h,3);
      cout <<"Current name is"<<task[num].getname()<<". Please enter your new name"<<endl;
      SetConsoleTextAttribute(h,7);
      getline(cin,input);
      getline(cin,input);
      task[num].setname(input);
      remove("t.txt");
      for(int i{1};i<=total;i++)
      {
      otaskfile.open("t.txt",ios::app);
      if(otaskfile.is_open())
        {
        otaskfile<<task[total].getname()<<""<<endl;
        otaskfile<< task[total].getdescription()<<""<<endl;
        otaskfile<< task[total].getdue()<<""<<endl;
        otaskfile<<task[total].getstatus() << "" <<endl;
        otaskfile<<task[total].getuser()<<""<<endl;
        otaskfile.close();
        otaskfile.close();
        }
        else
        {
          SetConsoleTextAttribute(h,4);
        cout<< "bad"<<endl;
        SetConsoleTextAttribute(h,7);
        }
      }
      break;
      case 2:
      SetConsoleTextAttribute(h,3);
      cout <<"Current description is"<<task[num].getdescription()<<". Please enter your new description"<<endl;
      SetConsoleTextAttribute(h,7);
      getline(cin,input);
      task[num].setdescription(input);
            remove("t.txt");
      for(int i{1};i<=total;i++)
      {
      otaskfile.open("t.txt",ios::app);
      if(otaskfile.is_open())
        {
        otaskfile<<task[total].getname()<<""<<endl;
        otaskfile<< task[total].getdescription()<<""<<endl;
        otaskfile<< task[total].getdue()<<""<<endl;
        otaskfile<<task[total].getstatus() << "" <<endl;
        otaskfile<<task[total].getuser()<<""<<endl;
        otaskfile.close();
        }
        else
        {
          SetConsoleTextAttribute(h,4);
        cout<< "bad"<<endl;
        SetConsoleTextAttribute(h,7);
        }
      }
      break;
      case 3:
      cout <<"Current due date is"<<task[num].getdue()<<". Please enter your new due date"<<endl;
      getline(cin,input);
      task[num].setdue(input);
            remove("t.txt");
      for(int i{1};i<=total;i++)
      {
      otaskfile.open("t.txt",ios::app);
      if(otaskfile.is_open())
        {
        otaskfile<<task[total].getname()<<""<<endl;
        otaskfile<< task[total].getdescription()<<""<<endl;
        otaskfile<< task[total].getdue()<<""<<endl;
        otaskfile<<task[total].getstatus() << "" <<endl;
        otaskfile<<task[total].getuser()<<""<<endl;
        otaskfile.close();
        }
        else
        {
          SetConsoleTextAttribute(h,4);
        cout<< "bad"<<endl;
        SetConsoleTextAttribute(h,7);
        }
      }
      break;
      case 4:
      SetConsoleTextAttribute(h,3);
      cout <<"Current status is"<<task[num].getstatus()<<". Please enter your new status"<<endl;
      SetConsoleTextAttribute(h,7);
      getline(cin,input);
      task[num].setstatus(input);
            remove("t.txt");
      for(int i{1};i<=total;i++)
      {
      otaskfile.open("t.txt",ios::app);
      if(otaskfile.is_open())
        {
        otaskfile<<task[total].getname()<<""<<endl;
        otaskfile<< task[total].getdescription()<<""<<endl;
        otaskfile<< task[total].getdue()<<""<<endl;
        otaskfile<<task[total].getstatus() << "" <<endl;
        otaskfile<<task[total].getuser()<<""<<endl;
        otaskfile.close();
        }
        else
        {
          SetConsoleTextAttribute(h,4);
        cout<< "bad"<<endl;
        SetConsoleTextAttribute(h,7);
        }
      }
      break;
      case 5:
      SetConsoleTextAttribute(h,3);
      cout <<"Are you sure you want to mark "<<task[num].getstatus()<<" as complete. Doing so will delete all instances of this task[y/n]"<<endl;
      SetConsoleTextAttribute(h,7);
      string sure{};
      cin>>sure;
        if (sure=="y"||sure=="Y")
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
        otaskfile<<task[total].getname()<<""<<endl;
        otaskfile<< task[total].getdescription()<<""<<endl;
        otaskfile<< task[total].getdue()<<""<<endl;
        otaskfile<<task[total].getstatus() << "" <<endl;
        otaskfile<<task[total].getuser()<<""<<endl;
        otaskfile.close();
        }
        else
        {
          SetConsoleTextAttribute(h,4);
        cout<< "bad"<<endl;
        SetConsoleTextAttribute(h,7);
        }
      }
          }
        }
        else
        {
          SetConsoleTextAttribute(h,4);
          cout<<"Your task was not deleted"<<endl;
          SetConsoleTextAttribute(h,7);
        }
      
    }
  }
  else
  {
    SetConsoleTextAttribute(h,4);
    cout<<"You don't have permission to edit this task"<<endl;
    SetConsoleTextAttribute(h,7);
  }
  }
}

      remove("t.txt");
      for(int i{1};i<=total;i++)
      {
      otaskfile.open("t.txt",ios::app);
      if(otaskfile.is_open())
        {
        otaskfile<<task[total].getname()<<""<<endl;
        otaskfile<< task[total].getdescription()<<""<<endl;
        otaskfile<< task[total].getdue()<<""<<endl;
        otaskfile<<task[total].getstatus() << "" <<endl;
        otaskfile<<task[total].getuser()<<""<<endl;
        otaskfile.close();
        }
        else
        {
          SetConsoleTextAttribute(h,4);
        cout<< "bad"<<endl;
        SetConsoleTextAttribute(h,7);
        }
      }
      
return 0;
  
}
