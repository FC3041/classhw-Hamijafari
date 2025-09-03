#include <iostream>
#include <Windows.h>

using namespace std;

class myvector{
    public:
    myvector(int capacity=10):m_capacity(capacity),m_buffer(new int[capacity]){

    }

    ~myvector(){
        delete [] this->m_buffer;
        this->m_capacity = 0;
    }

    private:
    int m_capacity;
    int* m_buffer;
};

class myfile{
    string m_filename;
    FILE* m_filehandle;
    public:
    myfile(const string& filename):m_filename(filename){
        m_filehandle = fopen(m_filename.c_str(), "w");
    }

    ~myfile(){
        fclose(m_filehandle);
    }

    void writeln(const string str){
        fprintf(m_filehandle, str.c_str());
    }
};

//write a class (KeepTime) {
//KeepTime.t("for loop") ...
// ... }

int main(){
    unsigned long long l = GetTickCount64();
}