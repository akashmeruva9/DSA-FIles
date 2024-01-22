#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    
    int data;
    Node* next;

    Node( int x )
    {
        data = x;
        next = NULL;
    }
};

class MyStack{
    public :

    Node* head;
    int capacity;
    int top;

    MyStack( int n )
    {
        head = NULL;
        capacity = n;
        top = 0;
    }

    void push( int x )
    {
        if( top == capacity-1 )
        return;
        else {

            if( head == NULL )
            head = new Node(x);
            else {
                Node* temp = head;
                head = new Node(x);
                head->next = temp;
            }
            top++;
        }
    }

    int pop(){

        if( top == 0)
        return -1;
        else {
            top--;
            int temp = head->data;
            head = head->next;
            return temp;
        }
    }
    
    void print()
    {
        Node* temp = head;

        while( temp != NULL )
        {
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }
};

int main()
{
    MyStack a(9);

    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    a.pop();
    a.push(6);
    a.push(7);
    a.push(8);
    a.push(9);

    a.print();

    return 0;
}