#include <string>
#include <iostream>
using std::string;
class User {
    private:
    string name;
    string password;
    public:
    User();
    User(string name, string pass);
    ~User();
};