#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <vector>
#include "Task.h"
#include "User.h"
using namespace std;
int total{};
int x{};
int usernum{};
extern string store_user;
int main(){
ofstream taskfile;
ofstream userfile;
userfile.open("u.txt",ios::app);
cout <<"Welcome to the Task Manager!" <<endl;
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
    case 5: //delete
    {
      string to_delete, line, fileContent;
      int deletedCount = 0;
      cout << "Enter text to delete (lines containing this text will be removed): ";
      getline(cin, to_delete); // consume leftover newline
      getline(cin, to_delete);
      ifstream infile("t.txt");
      if (!infile.is_open()) {
        cout << "Error opening file for reading" << endl;
      } else {
        while (getline(infile, line)) {
          if (line.find(to_delete) == string::npos) {
            fileContent += line + "\n";
          } else {
            ++deletedCount;
          }
        }
        infile.close();
        ofstream outfile("t.txt");
        if (!outfile.is_open()) {
          cout << "Error opening file for writing" << endl;
        } else {
          outfile << fileContent;
          outfile.close();
          cout << deletedCount << " matching line(s) removed." << endl;
        }
      }
    }
    break;
    default:
    cout << "Please Choose a Valid option"<<endl;
    break;
    }

  if (x==1){//view tasks(function can be found in task.h)
    ifstream infile;
    infile.open("t.txt");
    if(infile.is_open())
    {
        string line;
        while(getline(infile, line))
        {
        cout <<line <<endl;
        }
      
      infile.close();
    }
    else
    {
      cout <<"error" << endl;
    }
  }
  else if(x==2){//add tasks(function can be found in task.h)
  total++;
  task[total].getdata();
taskfile.open("t.txt",ios::app);
if(taskfile.is_open()){
 taskfile << "name: " <<task[total].getname()<<""<<endl;
 taskfile << "Description:" << task[total].getdescription()<<""<<endl;
 taskfile << "Due: " << task[total].getdue()<<""<<endl;
 taskfile << "Status: " <<task[total].getstatus() << "" <<endl;
taskfile.close();
    }else{
      cout<< "bad"<<endl;
    }
  }

//Urgent();


if (x==3){
 
        // Change text in file
        string oldText, newText;
        string line, fileContent = "";
        ifstream infile;
        
        cout << "Enter the text you want to find: ";
        getline(cin, oldText);
        getline(cin, oldText); //buffer fix
        
        cout << "Enter the replacement text: ";
        getline(cin, newText);
        
        infile.open("t.txt");
        if(infile.is_open())
        {
            while(getline(infile, line))
            {
                //find and replace all occurrences of oldText with newText
                size_t pos = 0;
                while((pos = line.find(oldText, pos)) != string::npos)
                {
                    line.replace(pos, oldText.length(), newText);
                    pos += newText.length();
                }
                fileContent += line + "\n";
            }
            infile.close();
            
            //write the modified content back to the file
            ofstream outfile;
            outfile.open("t.txt");
            if(outfile.is_open())
            {
                outfile << fileContent;
                outfile.close();
                cout << "Text replacement successful!" << endl;
            }
            else
            {
                cout << "Error writing to file" << endl;
            }
        }
        else
        {
          cout <<"Error opening file" << endl;
        }
      }
      
return 0;
  
}
     
}
