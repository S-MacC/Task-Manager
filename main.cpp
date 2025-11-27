#include <iostream>
#include <string>
#include "Task.h"
#include "User.h"
using namespace std;

int x{};
int main(){
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
  User emp[5]; 
  Task foo[5];
  int n, i;
    emp[x].getdata();//getting user account creation
  //use this for login maybe











for(int i{}; i<1; ){//looping the switch statement
    int b{1};
cout <<"Select an option: 1 to view all tasks, 2 to add a task, 3 to view urgent tasks and 4 to exit"<<endl;
cin >> x ; 
switch(x){
    case 1:
  for(int j = 0; j < 5; j++) 
    foo[j].putdata();
    
    break;
    case 2:
    
        b++;
    cout <<"Add Task"<<endl;
     
   
      
    
    break;
    case 3:
    cout <<"View Urgent Tasks"<<endl;
    break;
    case 4:
    {
    i=i+1;
    }
    break;
    default:
    cout << "Please Choose a Valid option"<<endl;
    break;
}
if (x==1){
       for(int q{};q<b;q++)
    foo[1].putdata();
}
else if(x==2){
  foo[1].getdata();  
}
//Urgent();



}
cout<< "Test";
return 0;

}
//This is currently a test function