#include <iostream>
#include <stdlib.h>

using namespace std;

class MyList{
    public:
    int m_size;
    int m_capacity;
    int* m_pnums;

    MyList():m_size(0),m_capacity(0),m_pnums(nullptr){};

    MyList(int size, int capacity, const int* nums):m_size(size), m_capacity(capacity){
        m_pnums = (int*)malloc(sizeof(int)*size);
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

    void append(int num){
        if (m_size == m_capacity){
            if (m_size == 0){
                resize(1);
            }
            else{
                resize(m_capacity*2);
            }
        }
        m_pnums[m_size] = num;
        m_size++;
    }

    void insert(int index, int value){
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
            int temp = m_pnums[i];
            m_pnums[i] = m_pnums[m_size-1-i];
            m_pnums[m_size-i-1] = temp;
        }
    }

    void sort(){
        for (int i = 0; i < m_size; i++){
            for (int j = 0; j < m_size-1; j++){
                if (m_pnums[j] > m_pnums[j+1]){
                    int temp = m_pnums[j];
                    m_pnums[j] = m_pnums[j+1];
                    m_pnums[j+1] = temp;
                }
            }
        }
    }

    private:
    void resize(int newsize){
        int* newnums = (int*)malloc(sizeof(int)*newsize);
        for (int i = 0; i < newsize; i++){
            newnums[i] = m_pnums[i];
        }
        free(m_pnums);
        m_pnums = newnums;
    }
};

int main(){
    MyList l1;

    int nums[6] = {1,2,3,4,5,6};
    MyList l2(6, 10, nums);

    l2.print_list();
    l2.reverse();

    l2.print_list();

    l2.sort();
    l2.print_list();
}