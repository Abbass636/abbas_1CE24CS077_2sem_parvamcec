#include<iostream>
using namespace std;
class Calculator{
    private:
    int a,b,c;
    public:
    void getinput(){
        cout<<"enter two numbers: ";
        cin>>a>>b;
    }
    void add(){
        cout<<"Result:"<<a+b<<endl;
    }
    void sub(){
        cout<<"Result:"<<a-b<<endl;
    }
    void mul(){
        cout<<"Result:"<<a*b<<endl;
    }
    void div(){
        cout<<"Result:"<<a/b<<endl;
    }
    void mod(){
        cout<<"Result:"<<a%b<<endl;
    }
    void exit(){
        cout<<"you have exited:"<<endl;
    }
    int display(){
        switch(c)
        {
            case 1:
                add();
                break;
            case 2:
                sub();
                break;
            case 3:
                mul();
                break;
            case 4:
                div();
                break;
            case 5:
                mod();
                break;
            case 6:
                exit();
                break;
            default:
                cout<<"invalid choice"<<endl;
                break;
        }
    }
};
int main(){
    Calculator c1;
    c1.getinput();
    c1.display();
}
