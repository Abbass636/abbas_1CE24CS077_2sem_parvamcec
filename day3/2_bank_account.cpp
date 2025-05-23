#include<iostream>
using namespace std;
/**
 * constructor:
 * ============
 * constructor is a special type of method it will call automatically when object is created.
 * by default compiler will provide default constructor
 * constructor name should be same as class name
 * constuctor does not have return type
 * 
 * use of constructor 
 * =================
 * it is used to initialize the values of data members 
 */
class BankAccount{
    // data members/properties
    public:
    string holder_name;
    int ac_no;
    //constructor
    BankAccount()
    {
        cout << "constructor is called automatiocally" << endl;
    }
};
int main(){
    BankAccount b1;
    return 0;
}