#include <iostream>
#include<string.h>
using namespace std;

 class emp {
int id;
char name[10];
int salary ;
public:void print(){
  cout<<id <<":"<<name<<":"<<salary; //member function
}
void setId(int _id){
    id=_id;
}
void setname(char *_name){
    strcpy(name,_name);
}
void setsalary(int _salary){
    salary=_salary;
}
int getId(){
return id;
}
char* getname(){
return name;

}
int getsalary(){
return salary;
}
 };
int main()
{
    emp e1;
    e1.setId(10);
    cout<< e1.getId();
    e1.setsalary(2000);
    cout<<endl;
    cout<<e1.getsalary();
    e1.setname("nour");
    cout<<endl;
    cout<<e1.getname();
    return 0;
}
