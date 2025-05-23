#include<iostream>
using namespace std;
class Busdetails{
    // data members/properties
    public:
    string passenger_name;
    int seat_no;
    //constructor
    //all-args constructor or full-args constructor
    Busdetails(string name,int seat_no)
    {
        cout << "constructor is called automatiocally" << endl;
        this->passenger_name = name;
        this->seat_no = seat_no;
    }
    void display()
    {
        cout << "passenger name:" << this->passenger_name << endl;
        cout << "seat number:" <<seat_no << endl;
    }
};
int main(){
    Busdetails b1("abbas",111);
    b1.display();
    return 0;
}
