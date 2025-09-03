#include <iostream>

using namespace std;

class Date{
    int day;
    int month;
    int year;
};

class Person{
    public:
    int m_NID;
    char m_fname[20];
    char m_lname[20];
    Date m_BD;

    Person(int id, const char* fname, const char* lname, Date bd):m_NID(id),m_BD(bd){
        int i;
        for (i = 0; i < sizeof(m_fname) && fname[i] != '\0'; i++){
            m_fname[i] = fname[i];
        }
        m_fname[i] = '\0';
        for (i = 0; i < sizeof(m_lname) && lname[i] != '\0'; i++){
            m_lname[i] = lname[i];
        }
        m_lname[i] = '\0';
    };

    void print_p() const{
        cout << "Name: " << m_fname << endl;
        cout << "Family: " << m_lname << endl;
    }
};

int main(){
    Date d;
    Person p1(1, "Hami", "jafari", d);

    p1.print_p();
    return 0;
}