#include <iostream>

using namespace std;

class MyStr{
    public:
    int m_size;
    char* m_pchars;

    MyStr():m_size(0), m_pchars(nullptr){};

    MyStr(const char* chars){
        int i;
        for (i = 0; chars[i] != '\0'; i++);
        m_size = i + 1;
        m_pchars = (char*)malloc(sizeof(char)*m_size);
        for (i = 0; i < m_size; i++){
            m_pchars[i] = chars[i];
        }
        m_pchars[m_size] = '\0';
    }

    MyStr(const char* chars, int start, int count){
        m_size = count;
        m_pchars = (char*)malloc(sizeof(char)*(m_size+1));
        for (int i = 0; i < m_size; i++){
            m_pchars[i] = chars[start + i];
        }
        m_pchars[count] = '\0';
    }

    bool check_substr(const char* chars){

    }

    void print_str(){
        cout << m_pchars << endl;
    }
};

int main(){
    MyStr s1;
    MyStr s2("hami jafari", 5, 6);
    s2.print_str();
    //s2.check_substr("mi"); --> TODO
    //s2.len(); --> TODO
    //
}