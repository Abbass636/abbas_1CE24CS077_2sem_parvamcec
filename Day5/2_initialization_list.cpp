#include<iostream>
using namespace std;

class Employee
{
    private:
    string employee_name;
    int work_hours;
    public:
    
    Employee(string employe_name,int work_hours):employee_name(employe_name),work_hours(work_hours)
    {
        cout<<"Constructor is called"<<endl;
    }
    void display()
    {
        cout<<" Employee name :"<< employee_name <<endl;
        cout<<"Work hours :"<< work_hours <<endl;

    }
};
int main()
{
    //object
    Employee s1("abbas", 636);
    s1.display();
}


