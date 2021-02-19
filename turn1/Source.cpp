#include <iostream>
using namespace std;


typedef struct T
{
    T* next;
    int* pData;
    int* pStartData;
    int count = 0;
};
class turn
{

public:
    void test()
    {
        T* ptr = new T;
        int c = 0;
        ptr->pData = &c;
        ptr->pStartData = ptr->pData;
    }
    void push(int data)
    {
        T* ptr = new T;
        *(ptr->pData) = data;
        ptr->pData += sizeof(int);
        ptr->count++;
    }
    int pop()
    {
        T* ptr = new T;
        cout << *(ptr->pStartData) << endl;
        ptr->pStartData += sizeof(int);
        ptr->count--;
        return *(ptr->pData);
    }
};
int main()
{
    turn hello;
    hello.test();
    hello.push(1);
    hello.push(2);
    hello.push(3);


    cout << hello.pop();
    //cout << hello.pop();
    //cout << hello.pop();

    return 0;
}