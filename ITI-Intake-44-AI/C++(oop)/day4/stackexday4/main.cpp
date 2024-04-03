#include <iostream>

using namespace std;
class Stack
{
    int* arr;
    int size;
    int tos;
public:
    Stack(int _size=5)
    {
        tos=0;
        size=_size;
        arr=new int[_size];
    }
    Stack(Stack const& s)
    {
        int i;
        tos=s.tos;
        size=s.size;
        arr=new int[size];
        for(i=0; i<tos; i++)
        {
            arr[i]=s.arr[i];
        }
        cout<<"\n copy ctor";

    }
    ~Stack()
    {
        delete [] arr;
    }

    int isEmpty()
    {
        if(tos==0)
            return 1;
        else
            return 0;
    }
    int isFull()
    {
        if(tos==size)
            return 1;
        else
            return 0;
    }
    int push(int x)
    {
        if(isFull()==1)
            return 0;
        else
        {
            arr[tos]=x;
            tos++;
            return 1;
        }
    }
    int pop(int* x)
    {
        if(isEmpty()==1)
        {

            cout<<"empty"<<endl;
            return 0;
        }
        else
        {
            tos--;
            *x=arr[tos];

            return   1;
        }
    }
    Stack operator=(Stack s)
    {
        tos=s.tos;
        size = s.size;
        delete[] arr;
        arr = new int[size];
        for (int i=0; i<tos; i++)
        {
            arr[i]=s.arr[i];
        }
        return *this;
    }
    Stack operator+(Stack s)
    {
        Stack s3(size+s.size);
        int i,j;
        s3.tos=tos+s.tos;
        // s3.size=size+s.size;
        for(i=0; i<tos; i++)
        {
            s3.arr[i]=arr[i];
        }
        for(j=i ; j < s3.tos ; j++)
        {
            s3.arr[j]=s.arr[j-i];
        }
        return s3;
    }
};

void viewcontent(Stack s)
{
    int x=0;
    while(s.isEmpty()!=1)
    {
        if(s.pop(&x)==1)
            cout<<x<<endl;
    }
}
int main()
{
    int x=0;
    Stack s1(4);
    Stack s2(3);
    Stack s3(7);
    //Stack s2(5);
    s1.push(10);
    s1.push(20);
    s1.push(70);
    s2.push(50);
    s2.push(60);

    //s2=s1;
    s3=s1+s2;
    viewcontent(s3);




    return 0;
}
