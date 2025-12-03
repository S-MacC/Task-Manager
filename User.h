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
    string getpassword(){return password;};

    void setpassword(const string &p){password=p;};
    void setuser(const string &u){username=u;}

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