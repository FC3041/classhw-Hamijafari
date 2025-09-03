#include <iostream>
#include <string>

using namespace std;

int main(){
    string name = "Hami"; // TODO : string name("Hami");
    // TODO : string name3; should work
    // TODO : name3.assign("Sara");

    string name2 = "Sara"; // TODO : name.size() --> returns the size of the string
    cout << "Hello " << name << ":"; // TODO : name.c_str() --> converts to string to be able to cout
    cout << name.size() << endl;

    name += " + " + name2; // TODO : name.append(char);
    // TODO : name.append(char*);
    cout << name << endl;

    return 0;
}