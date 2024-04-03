#include <iostream>
#include <string.h>

using namespace std;

/*class X
{
    int m;
public:
    X() : m(10)
    {
    }
    X(int mm): m(mm)
    {
    }
    int getm()
    {
        return m;
    }
};
class Y : public X
{
    int n;
public:
    Y(int nn) : n(nn) {}
    int getn()
    {
        return n;
    }
};
int main()
{
    Y yobj( 100 );
    cout << yobj.getm() << " " << yobj.getn() << endl;;

}*/

/*class BaseClass
{
protected:
    int i;
public:
    BaseClass(int x)
    {
        i = x;
    }
    ~BaseClass()
    {
    }
};
class DerivedClass: public BaseClass
{
    int j;
public:
    DerivedClass(int x, int y): BaseClass(y)
    {
        j = x;
    }
    ~DerivedClass()
    {
    }
    void show()
    {
        cout << i << " " << j << endl;
    }
};
int main()
{
    DerivedClass ob(3, 4);
    ob.show();
    return 0;
}*/
/*
class MyInterface
{
public:
    virtual void Display() = 0;
};
class Class1 : public MyInterface
{
public:
    void Display()
    {
        int a = 5;
        cout << a;
    }
};
class Class2 : public MyInterface
{
public:
    void Display()
    {
        cout <<" 5" << endl;
    }
};
int main()
{
    Class1 obj1;
    obj1.Display();
    Class2 obj2;
    obj2.Display();
    return 0;
}*/
/*
class p
{
protected:
    int width, height;
public:
    void set_values (int a, int b)
    {
        width = a;
        height = b;
    }
    virtual int area (void) = 0;
};
class r: public p
{
public:
    int area (void)
    {
        return (width * height);
    }
};
class t: public p
{
public:
    int area (void)
    {
        return (width * height / 2);
    }
};
int main ()
{
    r rect;
    t trgl;
    p * ppoly1 = &rect;
    p * ppoly2 = &trgl;
    ppoly1->set_values (4, 5);
    ppoly2->set_values (4, 5);
    cout << ppoly1 -> area() ;
    cout << ppoly2 -> area();
    return 0;
}*/
/*
class A
{
    float d;
public:
    virtual void func()
    {
        cout<<"Hello this is class A\n";
    }
};
class B: public A
{
    int a = 15;
public:
    void func()
    {
        cout<<"Hello this is class B\n";
    }
};
int main()
{
    A *a;
    a->func();
    return 0;
}

9.Which of the following is correct?
(2 Points)
a) Base class pointer object cannot point to a derived class object

*/
/*
class A
{
    int a;
    A()
    {
        a = 5;
    }
};
int main()
{
    A *obj = new A;
    cout << obj->a;
}

15.Which of the following is correct about this pointer in C++?
(2 Points)
a) this pointer is passed as a hidden argument in all the functions of a class
b) this pointer is passed as a hidden argument in all non-static functions of a class

*/
/*
 int main()
 {
 int a = 5, b = 10, c = 15;
 int *arr[ ] = {&a, &b, &c};
 cout << arr[1];
 return 0;
 }
*/
/*
int main()
 {
 char *ptr;
 char Str[] = "abcdefg";
 ptr = Str;
 ptr += 5;
 cout << ptr;
 return 0;
 }*/
  int main()
 {
 int a[2][4] = {3, 6, 9, 12, 15, 18, 21, 24};
 cout << *(a[1] + 2) << *(*(a + 1) + 2) << 2[1[a]];
 return 0;
 }
