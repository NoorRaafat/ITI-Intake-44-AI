#include <iostream>
#include<string.h>
using namespace std;
  struct emp {

int id;
char name[5];
int salary ;
void print(){
  cout<<id <<":"<<name<<":"<<salary; //member function
}
};

int main()
{
    emp e1 ={10,"nour",2000};
    e1.print();

    return 0;
}
