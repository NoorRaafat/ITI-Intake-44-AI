#include <iostream>





using namespace std;
class Person {
    protected:
    int id ;
    char name[10];
    int age ;



public:
    void setid(int _id ){id =_id ;}
    void setname(char * _name){strcpy(name= _name);  }
    void setage(int _age){age=_age;}
    int getid(){return id ;}
    char* getname(){return name;}
    int getage(){return age;}
    void print (){
        cout<<"\n person "<<":"<<id <<":"<<name << ":"<<age;

    }
};
class Student :public Person
{
    char grade;
public :
    void setgrade (char _grade){grade = _grade;}
    char getgrade (){return garde ;}
    void print (){
        Person::print()
        cout<<":"<,garde ;

    }

};
class instractor {
    float salary;
public:
   void setsalary(float -salary){salary= _salary;}
    float getsalary (){return salary;}



};

int main()
{
   instractor r1;
   r1.print();
    return 0;
}
