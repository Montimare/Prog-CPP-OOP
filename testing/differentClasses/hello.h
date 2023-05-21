#include <string>

using namespace std;

class hello
{
private:
    string text = "Hello World!";
public:
    string getHello(){
        return text;
    }
};