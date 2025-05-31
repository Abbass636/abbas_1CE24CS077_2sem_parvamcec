#include<iostream>
#include<fstream>
using namespace std;
class Student
{
private:
    string name;
    int roll_num;
    public:
void input()
    {
        cout<<"enter the name:"<<endl;
        cin>>name;
        cout<<"enter the roll number:"<<endl;
        cin>>roll_num;
    }
    void display()
    {
        cout<<"student details:"<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"roll_num:"<<roll_num<<endl;
    }
};
int main()
{
   /**
    * ios::in --> read mode
    * ios::out--> write mode
    * ios::app --> append mode
    * ios::end --> go for end of the file
    * ios::binary--> binary mode
    */
   double a = 10;
   cout << "Size of a:" << sizeof(a) << endl;
   ;
   Student s1;

   //write mode
   ofstream fout("students.dat", ios::binary); // data file is stored binary data
   s1.input();
   /**
    * write() --> method to write binary data to file
    * read() --> method to read binary data from file
    */
   fout.write((char *)&s1, sizeof(s1));
   fout.close();

   //read  mode
   Student s2;
   ifstream fin("students.dat", ios::binary);
   fin.read((char *)&s2, sizeof(s2));
   s2.display();

   return 0;
}
