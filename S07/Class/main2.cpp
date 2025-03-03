#include <iostream>

using namespace std;

class bigobj{
    char buf[1000*1000];
};

void mest(bigobj& b){
    cout << "done mest" << endl;
}

void test(bigobj& b){
    mest(b);
    cout << "done" << endl;
}

int main(){
    bigobj bo;
    test(bo);
}