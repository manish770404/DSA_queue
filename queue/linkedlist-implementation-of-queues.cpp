#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class queue
{
    node *front;
    node *back;
     public:


    queue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int x)
    {
        node *n = new node(x);
        if (front == NULL)
        {
            back = n;
            front = n;
            return;
        }
        back->next = n;
        back = n;
    }
    void pop()
    {
        if (front == NULL)
        {
            cout << "queue is underflow" << endl;
            return;
        }
        node *temp = front;
        front = front->next;

        delete temp;
    }
    int peek()
    {
        if (front == NULL)
        {
            cout << "no element in the queue" << endl;
            return  -1;
        }
        else
            return front->data;
    }
    bool isempty()
    {
        if (front == NULL)
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{
    int count;
    queue q;
    q.push(1);
    q.push(21);
    q.push(11);
    q.push(31);
    q.push(51);
    q.push(81);
    q.push(61);
    q.push(111);
    q.push(13);

    cout << q.peek() << endl;

    q.pop();
    cout << q.peek() << endl;
    
   

    return 0;
}
