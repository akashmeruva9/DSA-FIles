#include<bits/stdc++.h>
using namespace std;

class MyStack{
    public:

    int *arr;
    int top;
    int capacity;

    MyStack( int n )
    {
        capacity = n;
        arr = new int[n];
        top = -1;
    }

    void push( int x )
    {
        if(top == capacity-1)
            cout<<"Overflow";
        else 
            arr[++top] = x;
    }

    int pop()
    {
        if( top != -1)
        return arr[top--];
        else 
        cout<<"Underflow";
    }

    int size(){
        return top+1;
    }

    void print()
    {
        for( int i=0 ; i<=top ; i++)
        cout<<arr[i]<<endl;
    }
};

int main()
{
    MyStack a(10);
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
    a.push(10);
    a.pop();

    a.print();
}