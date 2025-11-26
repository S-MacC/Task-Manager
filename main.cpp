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

    return 0;
}
//This is currently a test function