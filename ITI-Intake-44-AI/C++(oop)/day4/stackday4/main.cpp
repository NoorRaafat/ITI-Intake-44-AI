#include <iostream>
using namespace std;


class Stack
{
    int* arr ;
    int size;
    int tos;


public:
    Stack()
    {
        tos=0 ;
        size =5;
        arr= new int [size]; // dynamic allocated
    }

    Stack(int _size)
    {
        tos=0;
        size=_size;
        arr=new int [size];

    }

    Stack (Stack const & s)
    {
        tos=s.tos; // s1
        //tos s2
        size =s.size; //s1
        arr=new int [size];
        for (int i=0; i<tos; i++)
            arr[i]=s.arr[i];

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
    //day4 stack4
    // make by ref so not calling copy constractor
    Stack& operator=(Stack const& s)
    {
        tos=s.tos;
        size=s.size;
        delete [] arr; // i have already arr so delete it first  vs copy constr not have so not need make that before
        arr = new int[size ];
        for (int i=0; i<tos; i++){
            arr[i]=s.arr[i];
        }
        return *this;

    }

    Stack& operator+(Stack const & s)
    {
        Stack result(size+s.size);

        for (int i = 0; i <tos; i++)
        {
            result.push(arr[i]);
        }
        for (int i =0; i <s.tos ; i++)
        {
            result.push(s.arr[i]);
        }
        return result;
    }
    void print(){
        for(int i=0; i<size; i++){
            cout << arr[i] << endl;
        }
    }
     ~Stack()
    {

        delete[]arr;
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
//by ref

    /*viewcontent (Stack& s )
    {

        while(s.isempty()==0)
        {
            int x ;
            if (s.pop(&x))
            {
                cout<<endl<<x;
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

}

int main()
{
    Stack s1 ; // size =5

    s1.push(20);
    s1.push(30);
    s1.push(40);



    Stack s2;
    s2.push(60);
    s2.push(80);



    Stack s3;
    s3=s2+s1;
    s3.print();
    // copy costructor
    //viewcontent(s3); // shallow copy





    /*int x ;
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
*/


    return 0;
}






