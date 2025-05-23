#include<iostream>
using namespace std;
class BankAccount{
    // data members/properties
    public:
    string holder_name;
    int ac_no;
    //constructor
    //all-args constructor or full-args constructor
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
    BankAccount b1("aaabbbbaaassss",111);
    b1.display();
    return 0;
}