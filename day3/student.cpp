#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int roll_num;
    string class_name;
    float marks;
    string getGrade(){
        if(marks >90 && marks <=100)return"a+";
        else if(marks >80 && marks <=100)return"a";
        else if(marks >70 && marks <=80)return"b+";
        else if(marks >60 && marks <=70)return"b";
        else if(marks >50 && marks <=60)return"c+";
        else if(marks >40 && marks <=50)return"c";
        else return "f";
        }
};