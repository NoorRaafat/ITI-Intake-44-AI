#include <iostream>
#include <algorithm>


using namespace std;
class fraction{
    int num;
    int denum;
public:
    void setNum(int _num)
    {
        num=_num;
    }
    void setDenum(int _denum)
    {
        denum =_denum;
    }
    void setNumber(int _num ,int _denum)
    {
        num=_num;
        denum =_denum;
    }
    int getNum(){return num;}
    int getDenum(){return denum;}
    int getNumber(){return num/denum;}
//constractors
    fraction()
    {
        num=1;
        denum=1;
    }
    fraction(int number)
    {
        num =denum=number;
    }
    fraction(int _num ,int _denum)
    {
        num=_num;
        denum =_denum;
    }
    void print()
    {
        cout<<num<<"/"<<denum;

    }
    fraction operator+(fraction f)
    {
        fraction res;
        res.setDenum(f.getDenum()*denum);
        res.setNum(res.getDenum()/f.getNum()+res.getDenum()/denum);
        return res;

    }
    fraction operator-(fraction f)
    {
        fraction res;
        res.setDenum(f.getNum()*denum);
        res.setNum(res.getDenum()/f.getNum()-res.getDenum()/denum);
        return res;
    }
    /*
    fraction operator*(const fraction& f) {
    fraction res;
    res.setNum(num * f.getNum());
    res.setDenum(denum * f.getDenum());
    return res;
}*/
    fraction(const fraction& f)
    {
        num=f.num;
        denum=f.denum;
    }

};
 void simplify(fraction f)
    {
        fraction res;
        int z=__gcd(f.getNum(),f.getDenum());
        if(z>1)
            {
                res.setNum(f.getNum()/z);
                res.setDenum(f.getDenum()/z);

                cout<<"the simplified number is"<<res.getNum()<<"/"<<res.getDenum();
            }
        else if(z==1)
            cout<<"the fraction is on its simplest form";


    }





int main()
{
    fraction f;
    f.print();
    cout<<"\n";
    fraction f1(7);
    f1.print();
    cout<<"\n";
    fraction f2(12,4);
    f2.print();
    cout<<"\n";
    simplify(f2);
    fraction f3;
    f3=f1+f2;
    cout<<"\n";
    f3.print();
    fraction f4;
    f4=f2-f1;
    cout<<"\n";
    /*
    fraction f6;
    f6=f2*f1;
    cout<<"\n";
*/
    f4.print();
     cout<<"\n";
    fraction f5(f1);
    f5.print();

    return 0;
}
