#include <iostream>
using namespace std;

class Complex
{
    double real;
    double  img;
public:
    Complex ()
    {
        real =0;
        img=0;
    }

    Complex (double  _real,double _img)
    {
        real= _real;
        img =_img;

    }
    Complex (double _real)
    {
        real= _real;
        img=0;
    }
    void setreal(double _real)
    {
        real=_real;
    }
    void setimg(double _img)
    {
        img=_img;
    }
    double getreal()
    {
        return real;
    }

    double getimg()
    {
        return img;
    }
    void print()
    {
        if (img>0)
            cout<<endl<<real<<"+"<<img<<"j";
        else if (img<0)
            cout<<endl<<real<<img<<"j";
        else
            cout<<endl<<real;
    }


    Complex add (Complex c)
    {

        Complex res;
        res.real=c.real +real;
        res.img=c.img + img ;
        return res ;

    }
    // operator
    //complex +complex

    Complex operator+ (Complex const & c)
    {

        Complex res;
        res.real=c.real +real;
        res.img=c.img + img ;
        return res ;

    }
    //day4

    // == operator
    int operator== (Complex c )
    {
        if(real==c.real && img == c.img)
            return 1;
        else
            return 0;
    }
// != operator


    int operator!= (Complex r )
    {
        return !(*this ==r);
    }



    //++ operator pre
    Complex operator++()
    {
        real++;
        Complex r(real,img);
        return *this;

    }

    //++ operator post

    Complex operator++(int )
    {
        Complex res(real,img);
        real++;
        return res;
    }

    // explict operator

    explicit operator int ()
    {
        return real;
    }


};
//stand allone function


Complex add ( Complex c1,Complex c2)
{

    Complex res;
    res.setreal(c1.getreal()+c2.getreal());
    res.setimg(c1.getimg()+c2.getimg());
    return res ;

}



// int + complex


/*Complex  operator+ (int r, Complex  c)
{
    Complex res;
    res.setreal(r + c.getreal());
    res.setimg(c.getimg()) ;
    return res;
}*/








int main()
{
    Complex c1(4,20);
    Complex c2(5,20);
    Complex c3;
    c3=c1+c2;




    if (c1==c2)
        cout<<"equals\n";
    else
        cout<<"not equal \n";


    Complex c4;
    //pre
    c4=++c1;
    c4.print();


    //post
    c3=c2++;
    c3.print();
    cout<< endl;

    c1.setreal(7);
    //casting
    int x = (int)c1;

    cout<< x <<endl;



    /*c1.setreal(3);
    c1.setimg(4);
    c2.setreal(8);
    c2.setimg(-3);
    */
    //complex +complex

    // c3= c1.operator +(c2);



    // complex + int
    // c3 = c1 + 20;



    //int + complex
    //c3 = 10+ c1;



    //stand alone function
    //  c3=add(c1,c2);




    // fun in class
    // c4 =c1.add(c2);




    Complex c7(3);
    c7.print();


    Complex c5(3,5);
    c5.print();

    Complex c6(3.5,5.6);
    c6.print();

    cout << "Hello world!" << endl;
    return 0;
}
