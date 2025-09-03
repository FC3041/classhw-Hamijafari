#include <iostream>
#include <stdlib.h>

using namespace std;

template<typename T>

class MyList{
    public:
    int m_size;
    int m_capacity;
    T* m_pnums;

    MyList():m_size(0),m_capacity(0),m_pnums(nullptr){};

    MyList(int size, int capacity, const T* nums):m_size(size), m_capacity(capacity){
        m_pnums = (T*)malloc(sizeof(T)*size);
        for (int i = 0; i < size; i++){
            m_pnums[i] = nums[i];
        }
    }

    void print_list(){
        cout << "capacity : " << m_capacity;
        cout << "size : " << m_size << endl;
        for (int i = 0; i < m_size; i++){
            cout << m_pnums[i] << ",";
        }
        cout << endl;
    }

    int len(){return m_size;}

    void append(T value){
        if (m_size == m_capacity){
            if (m_size == 0){
                resize(1);
            }
            else{
                resize(m_capacity*2);
            }
        }
        m_pnums[m_size] = value;
        m_size++;
    }

    void insert(int index, T value){
        if (m_capacity == m_size){
            if (m_size == 0){
                resize(1);
            }
            else{
                resize(m_capacity*2);
            }
        }
        for (int i = m_size; i >= index; i--){
            m_pnums[i] = m_pnums[i-1];
        }
        m_pnums[index] = value;
        m_size++;
    }

    void clear(){
        m_size = 0;
        resize(1);
    }

    void erase(int index){
        for (int i = index; i < m_size-1; i++){
            m_pnums[i] = m_pnums[i+1];
        }
        m_size--;
    }

    void reverse(){
        for (int i = 0; i < (int)m_size/2; i++){
            T temp = m_pnums[i];
            m_pnums[i] = m_pnums[m_size-1-i];
            m_pnums[m_size-i-1] = temp;
        }
    }

    T at(int index){
        return m_pnums[index];
    }

    private:
    void resize(int newsize){
        T* newnums = (T*)malloc(sizeof(T)*newsize);
        for (int i = 0; i < newsize; i++){
            newnums[i] = m_pnums[i];
        }
        free(m_pnums);
        m_pnums = newnums;
    }
};

int main(){
    MyList<int> l1;

    double nums[6] = {1.2,2.4,3.6,4.8,5.9,6.1};
    MyList l2(6, 10, nums);

    l2.print_list();
    l2.append(19);
    l2.print_list();
    l2.insert(1,55);
    l2.print_list();
    l2.reverse();

    l2.print_list();
}