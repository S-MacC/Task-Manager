#include <string>
using std::string;
class Task {
    private:
    string due_date;
    string description;
    string name;
    string progress_status;
    string user;
    public:
    Task();
    Task(string name, string due, string desc, string progress, string user;)
    ~Task();
}