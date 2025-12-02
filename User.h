#include <string>
#include <iostream>
using std::string;
class User {
    private:
    string username;//Username
    string password;//Password
    int number;
    public:
  // Declaration of function
  void getdata();
  
  // Declaration of function
  void putdata();
  string getuser(){return username;};

};
void User::getdata()
{ 
  std::cout << "Enter name : ";
  std::cin >> username;
  std::cout << "Enter password : ";
  std::cin >> password;
}
void User::putdata()
{
  std::cout << username << " ";
  std::cout << password << " ";
  std::cout << std::endl;
}
