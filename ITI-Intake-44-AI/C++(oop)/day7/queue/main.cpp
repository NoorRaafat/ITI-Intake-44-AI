#include <iostream>

using namespace std;
class Queue
{
    int* arr;
    int size;
    int front;
    int rear;


public:
    Queue()
    {
        front =-1; //head
        rear =-1; //tail
        size=5;
        arr=new int[size];

    }

    Queue(int _size)
    {
        front =-1; // still no front
        rear =-1; // still no rear until now
        size=_size;
        arr=new int[size];
    }
    ~Queue()
    {
        delete[] arr;
    }
    Queue(Queue const & q)
    {
        front=q.front;
        rear=q.rear;
        size=q.size;
        arr=new int[size];
        for(int i=0; i<size; i++)
        {
            arr[i]=q.arr[i];
        }


    }
    int isFull()
    {
        if((rear+1)%size==front) // next of rear = front to be circular
            return 1; // full
        else
            return 0; //not full
    }
    int isEmpty()
    {
        if(front==-1&&rear==-1)
            return 1; // empty
        else
            return 0; // not empty
    }

    //rear +1
    void enqueue(int n)
    {
        if (isFull())
        {
            cout<<"queue is full\n";
            return;
        }
        else if(isEmpty())
        {
            front =rear=0;
        }
        else
        {
            rear=(rear+1)%size; //not empty and not full will make real to the second step

        }
        arr[rear]=n;
        cout << n << " enqueued to queue\n";


    }
    // front -1
    int dequeue(int* n)
    {
        if(isEmpty( ))
        {
            cout<<"queue is empty";
            return 0;
        }
        else if(front==rear) //one element
        {
            *n=arr[front];
            front=rear=-1; // will be empty again
        }
        else
        {
            *n=arr[front];
            front =(front+1)%size ; // if it is arrive to last element will return to 0 again
        }
    }
    Queue& operator=(Queue const & q)
    {
        rear=q.rear;
        front=q.front;
        size=q.size;
        arr=new int[size];
        for(int i=0; i<rear; i++)
        {
            arr[i]=q.arr[i];
        }
        return *this;
    }

    int peak()
    {
        if(front==-1)
        {
            cout<<"can't return the front of empty queue";
            return 0;

        }
        return arr[front];
    }


};
void viewContent(Queue & q)
{
    while(! q.isEmpty())
    {
        int x;
        q.dequeue(&x);
        cout<<x<<endl;
    }
}
int main()
{
    Queue q(4);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout<<"front is "<<q.peak()<<"\n";
    viewContent(q);

    return 0;
}

