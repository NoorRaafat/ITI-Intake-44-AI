#include <iostream>

using namespace std;

class bankAccount{
    int id;
    string name;
    int balance;

    public:
    void setId(int _id){
        id = _id;
    }

    void setName(string _name){
        name = _name;
    }

    void setBalance(int _balance){
        balance = _balance;
    }

    void withdraw(int _decrease){
        if (balance >= _decrease){
            balance -= _decrease;
        }
    }

    void deposite(int _increase){
        balance += _increase;
    }

    int getId(){
        return id;
    }

    string getName(){
        return name;
    }

    int getBalance(){
        return balance;
    }

};

int main()
{
    bankAccount account1;

    account1.setId(1);
    account1.setName("nour");
    account1.setBalance(5000);
    account1.withdraw(1000);//سحب
    account1.deposite(500);//ايداع

    cout << account1.getId() << endl;
    cout << account1.getName() << endl;
    cout << account1.getBalance() << endl;

    return 0;
}
