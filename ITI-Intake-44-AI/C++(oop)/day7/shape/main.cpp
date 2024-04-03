#include <iostream>

using namespace std;
class Shape{
protected:
    int dim1;
    int dim2;
public://setters and getters
    void setDim1(int _dim1)
    {
        dim1=_dim1;
    }
    void setDim2(int _dim2)
    {
        dim2=_dim2;
    }
    int getDim1(){return dim1;}
    int getDim2(){return dim2;}
    /*****constructors***/
    Shape()
    {
        dim1=dim2=1;
    }
    Shape(int dim)
    {
        dim1=dim2=dim;
    }
    Shape(int _dim1, int _dim2)
    {
        dim1=_dim1;
        dim2=_dim2;
    }
    void print()
    {
        cout<<"("<<dim1<<","<<dim2<<")";
    }
    virtual float calcArea()=0;

};
class rectangle :public Shape{
public:
    rectangle(){}/****constructors*/
    rectangle(int dim):Shape(dim){}
    rectangle(int _dim1 ,int _dim2):Shape(_dim1, _dim2){}

    float calcArea()
    {
        return dim1*dim2;

    }

};
class triangle: public Shape{
public:
    triangle(){}
    triangle(int dim):Shape(dim){}
    triangle(int _dim1, int _dim2):Shape(_dim1,_dim2){}
    float calcArea()
    {
        return 0.5*dim1*dim2;
    }
    void print()
    {
        cout<<dim1<<":"<<dim2;
    }

};
class circle:public Shape{
public:
   void setDim1(int _dim1)
   {
       dim1=dim2=_dim1;
   }
   void setDim2(int _dim2)
   {
       dim1=dim2=_dim2;

   }
   circle(){}
   circle(int dim):Shape(dim){}

   float calcArea()
   {
       return 3.14*dim1*dim2;
   }
   void print()
    {
        cout<<dim1;
    }

};
class square :public Shape{
public:
    void setDim1(int _dim1)
   {
       dim1=dim2=_dim1;
   }
   void setDim2(int _dim2)
   {
       dim1=dim2=_dim2;

   }
   square(){}
   square(int dim):Shape(dim){}

   float calcArea(){

        return dim1*dim2;
   }
   void print()
    {
        cout<<dim1;
    }

};
void printArea(Shape* s)
    {
        cout<<s->calcArea();
    }
void printStatus(Shape* s)
  {
      s->print();
  }

int main()
{
 rectangle r(10,20);
 triangle t(10,20);
 circle c(10);
 printArea(&r);
 cout<<endl;
 printStatus(&t);
 cout<<endl;
 cout<<c.calcArea();
 Shape* arr[3]={&r,&t,&c};
 int sum=0;
 for(int i=0;i<3;i++)
    {
        sum=sum+arr[i]->calcArea();
    }
 cout<<"sum is "<<sum;



    return 0;
}
