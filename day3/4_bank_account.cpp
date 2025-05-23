#include<iostream>
using namespace std;
/**
 * types of constructor
 * ===================
 * 1. default constructor
 * 2. parameterized constructer(full-args and args constructor)
 * 3. copy constructor
 */
class BankAccount{
    // data members/properties
    public:
    string holder_name;
    int ac_no;
    //constructor overloading - same constructor name but different parameters
    //this -> keyword that refers to current class instance(object)
    BankAccount()
    {
        cout << " default constructor" << endl;
        this->holder_name = "unknown";
        this->ac_no = 0;
    }
    // all -args constructor or full-args constructor
    BankAccount(string name,int ac_no)
    {
        cout << "constructor is called automatiocally" << endl;
        this->holder_name = name;
        this->ac_no = ac_no;
    }
    void display()
    {
        cout << "holder name:" << this->holder_name << endl;
        cout << "Account number:" <<ac_no << endl;
    }
};
int main(){
    BankAccount b1;
    BankAccount b2("abbas",636);
    b1.display(); // unknown and 0
    b2.display(); // abbas and 636
    return 0;
}