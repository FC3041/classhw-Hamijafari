#include <iostream>

using namespace std;

class MyList{
    public:
    int m_size; //TODO: new size = size*2
    int* m_pnums;

    MyList(int size, int* nums):m_size(size){
        m_pnums = (int*)malloc(sizeof(int)*size);
        for (int i = 0; i < size; i++){
            m_pnums[i] = nums[i];
        }
    }

    void print_l(){
        for (int i = 0; i < m_size; i++){
            cout << m_pnums[i] << ",";
        }
    }

    void append(int x){
        resize(m_size+1);
        m_pnums[m_size-1] = x;
    }

    void pop(){
        resize(m_size-1);
        m_size--;
    }

    private:
    void resize(int newsize){
        int* newmem = (int*)malloc(sizeof(int)*newsize);
        int i = 0;
        for (i = 0; i < m_size; i++){
            newmem[i] = m_pnums[i];
        }
        free(m_pnums);
        m_size = newsize;
        m_pnums = newmem;
        newmem = NULL;
    }
};

int main(){
    int nums[5] = {1,2,3,4,5};
    MyList m(5,nums);
    m.append(14);
    m.print_l();
}