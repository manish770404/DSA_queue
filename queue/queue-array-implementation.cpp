#include <iostream>
using namespace std;
#define n 20

class queue
{
    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void insert(int x)
    {
        if (back == (n - 1))
        {
            cout << "queue is overflow";
            return;
        }
        else
        {
            back++;
            arr[back] = x;
        }
        if (front == -1)
        {
            front++;
        }
    }
    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "queue is underflow";
            return;
        }
        front++;
    }

    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "queue is underflow"<<endl; 
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if (front == -1 || front > back)
        {
            return true;
        }
        return false;
    }
    int size()
    {
        int count = 0;
        for (int i = front; i <= back; i++)
        {
            count++;
        }

        return count;
    }
};
int main()
{
    int count;
    queue q;
    q.insert(1);
    q.insert(21);
    q.insert(11);
    q.insert(31);
    q.insert(51);
    q.insert(81);
    q.insert(61);
    q.insert(111);
    q.insert(13);

    cout << q.peek() << endl;

    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();
   cout<< q.size();

    return 0;
}
