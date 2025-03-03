#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main2(){
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

int main3(){
    vector<int> nums = {1, 2, 3, 4, 5}; //TODO : vector_int constructor

    nums.push_back(6); //TODO : vector_int.push_back(int)
    // TODO : nums.size() --> returns the size of the vector

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums.at(i) << endl; //TODO : vector_int.at(int) --> returns the element at the index
    }
    nums.insert(nums.begin(),5); //TODO : vector_int.insert(iterator, int)
    
    nums.erase(nums.begin()); //TODO : vector_int.erase(iterator)

    auto capacity = nums.capacity(); //TODO : vector_int.capacity() --> returns the capacity of the vector
    cout << "Capacity: " << capacity << endl;

    nums.clear(); //TODO : vector_int.clear() --> clears the vector

    return 0;
}

int main(){
    vector<int> nums;
    for (int i = 0; i < 60; i++)
    {
        cout << "Size: " << nums.size() << " Capacity: " << nums.capacity() << endl;
        nums.push_back(i);
    }

    return 0;
}