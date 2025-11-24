#include <string>
#include <iostream>
using std::string;
class User {
    private:
    string name;//Username
    string password;//Password
    public:
    User();
    User(string name, string pass);
    ~User();
};