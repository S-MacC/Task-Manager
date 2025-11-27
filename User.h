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

};
void User::getdata()
{ 
  std::cout << "Enter Id : ";
  std::cin >> password;
  std::cout << "Enter Name : ";
  std::cin >> username;
}
void User::putdata()
{
  std::cout << password << " ";
  std::cout << username << " ";
  std::cout << std::endl;
}