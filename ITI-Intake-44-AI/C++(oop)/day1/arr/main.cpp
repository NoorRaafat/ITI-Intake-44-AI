#include <iostream>
using namespace std;
#define size 5
int main()
{
 int* arr=new int[size];
    int i;
    for (i=0;i<size;i++ )
    {
        cout << "enter num:" << i+1 <<"  ";
        cin>>arr[i];
    }
     for (i=0;i<size;i++ )
    {
        cout <<arr[i] <<"\t";
    }
    return 0;
}
