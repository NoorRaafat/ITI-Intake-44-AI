#include <iostream>
using namespace std;

class Stack
{
    int* arr ;
    int size;
    int tos;


public:
    //default constractor
    Stack()
    {
        tos=0 ;
        size =5;
        arr= new int [size]; // dynamic allocated
    }
//constracor dynamic for size
    Stack(int _size)
    {
        tos=0;
        size=_size;
        arr=new int [size];

    }
    // copy constracor

    /*
     Stack (Stack & s)
    {
        tos=s.tos; // s1
        //tos s2
        size =s.size; //s1
        arr=s.arr ;
        for (int i=0; i<tos; i++)
            arr=s.arr;
            //ده اللي المفروض كان بيبقي موجود

    }*/

    // deep constractor
    // s =s1
    //this =s2
    Stack (Stack const & s)
    {

        tos=s.tos; // s1
        //tos s2
        size =s.size; //s1
        arr=new int [size];
        for (int i=0; i<tos; i++)
            arr[i]=s.arr[i];
    }

    ~Stack()
    {

        delete[]arr;
    }




    int push(int d )
    {
        if (isfull()==1)
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

            return 1;
        else
            return 0;

    }

    int isempty()
    {
        if (tos== 0)
            return 1;
        else
            return 0;

    }

};
/*
 viewcontent (Stack s ){

      while(s.isempty()==0){
             int x ;
         if (s.pop(&x)){
             cout<<endl<<x;
      }

    }*/

//by ref

viewcontent (Stack& s )
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
/*

//by address
viewcontent (Stack* s ){

  while(s.isempty()==0){
         int x ;
     if (s.pop(&x)){
         cout<<endl<<x;
  }

}
*/

int main()
{
    Stack s1 ; // size =5
    Stack s2(10);
    s1.push(10);
    s1.push(20);
    s1.push(50);
    s1.push(60);
    cout<<endl;

    Stack s3(s1); // copy costructor


    viewcontent(s1); // shallow copy
    cout<<endl;

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
