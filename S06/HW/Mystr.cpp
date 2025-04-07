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

    void len(){
        cout << (m_size-1) << endl;
    }

    void check_substr(const char* ch){
        for (int i = 0; i < m_size; i++){
            if (m_pchars[i] == ch[0]){
                for (int j = 1; j < strlength(ch); j++){
                    if (m_pchars[i+j] != ch[j]){
                        cout << false << endl;
                        return;
                    }
                }
            }
        }
        cout << true << endl;
        return;
    }

    void print_str(){
        cout << m_pchars << endl;
    }

    void add(const char* ch){
        int newsize = m_size+strlength(ch);
        char* newchar = (char*)malloc(sizeof(char)*newsize);
        for (int i = 0; i < m_size-1; i++){
            newchar[i] = m_pchars[i];
        }
        for (int j = 0; j < strlength(ch); j++){
            newchar[m_size-1+j] = ch[j];
        }
        newchar[newsize-1] = '\0';  
        free(m_pchars);
        m_pchars = newchar;
        m_size = newsize;
    }    

    private:
    int strlength(const char* ch){
        int count = 0;
        while (*ch != '\0'){
            count++;
            ch++;
        }
        return count;
    }
};

int main(){
    MyStr s1;
    MyStr s2("hami jafari");
    s2.print_str();
    s2.check_substr("ij");
    s2.len();
    s2.add("hello");
    s2.print_str();
}