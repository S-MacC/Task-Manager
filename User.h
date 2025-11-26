#include <string>
#include <iostream>
using std::string;
class User {
    private:
    string name;//Username
    string password;//Password
    int number;
    public:
    User();
    User(string name, string pass, int number);
    ~User();
};