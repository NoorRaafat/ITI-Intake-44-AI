#include <iostream>

using namespace std;
class Stack
{
    int arr [5];
    int size;
    int tos;


public:
    Stack()
    {
        tos=0 ;
        size=5;
    }
    int push(int d )
    {
        if (isfull()==1) // full
        {
            cout<< "stack is full";
            return 0;
        }
        else
        {
            arr[tos]=d;
            tos++;
            return 1;

        }
    }
    int pop (int* d )
    {
        if (isempty()==1)
        {
            cout<<"stack is empty";
            return 0;
        }
        else
        {
            tos--;
            *d=arr[tos];

            return 1;
        }

    }

    // pull
    // push

    int isfull()
    {
        if (tos==size)

            return 1; //true full
        else
            return 0; // false not full

    }

    int isempty()
    {
        if (tos== 0)
            return 1; // true empty
        else
            return 0; // false not empty

    }

};
viewcontent (Stack s )
{

    while(s.isempty()==0)
    {
        int x ;
        if (s.pop(&x))
        {
            cout<<endl<<x;
        }

    }
}

int main()
{
    Stack s1 ;
    s1.push(10);
    s1.push(20);
    s1.push(50);
    s1.push(60);
    s1.push(70);
    cout<<endl;

    viewcontent(s1);
    cout<<endl;

    cout <<"Hello world!" << endl;
    int x ;
    if (s1.pop(&x))
    {
        cout<<endl<<x;
    }

    if (s1.pop(&x))
    {
        cout<<endl<<x;
    }

    if (s1.pop(&x))
    {
        cout<<endl<<x;
    }





    return 0;
}

