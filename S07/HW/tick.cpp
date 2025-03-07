#include <iostream>
#include <windows.h>

using namespace std;

class Timer{
    public:
    unsigned long long start;

    Timer(){
        start = GetTickCount64();
    }

    ~Timer(){
        unsigned long long end = GetTickCount64();
        cout << "Tick Count : " << (end - start) << endl;
    }
};

class KeepTime{
    public:
    unsigned long long start;
    unsigned long long end;

    KeepTime(){
        start = 0;
        end = 0;
    }

    void startTimer(){
        start = GetTickCount64();
    }

    void endTimer(){
        end = GetTickCount64();
    }

    unsigned long long getElapsedTime(){
        return end - start;
    }

    public:
    void addition(unsigned long long a, unsigned long long b){
        startTimer();
        unsigned long long res = a + b;
        endTimer();
        cout << "+ : " << getElapsedTime() << endl;
    }

    void subtraction(unsigned long long a, unsigned long long b){
        startTimer();
        unsigned long long res = a - b;
        endTimer();
        cout << "- : " << getElapsedTime() << endl;
    }

    void multiplication(unsigned long long a, unsigned long long b){
        startTimer();
        unsigned long long res = a * b;
        endTimer();
        cout << "* : " << getElapsedTime() << endl;
    }

    void division(unsigned long long a, unsigned long long b){
        startTimer();
        unsigned long long res = a / b;
        endTimer();
        cout << "/ : " << getElapsedTime() << endl;
    }

    void iff(unsigned long long a, unsigned long long b){
        startTimer();
        unsigned long long res;
        if (a < b){
            res = a;
        }
        else{
            res = b;
        }
        endTimer();
        cout << "if : " << getElapsedTime() << endl;
    }

    void forloop(){
        startTimer();
        unsigned long long res = 0;
        for (int i = 0; i < 100000000; ++i){
            res += i;
        }
        endTimer();
        cout << "for : " << getElapsedTime() << endl;
    }

    void whileloop(){
        startTimer();
        unsigned long long res = 0;
        unsigned long long i = 0;
        while (i < 100000000){
            res += i;
            ++i;
        }
        endTimer();
        cout << "while : " << getElapsedTime() << endl;
    }
};

int main(){
    Timer t1;
    KeepTime t;
    t.addition(100000000, 10000000);
    t.subtraction(300000000, 20000000);
    t.multiplication(1000000, 1000000);
    t.division(60000000, 50000);
    t.iff(600000, 8000000);
    t.forloop();
    t.whileloop();

    return 0;
}
