#include<iostream>
using namespace std;
class student
{
    private:
    char name[10];
    int rollno;
    int age;
    public:
    student()
    {}
    student(char n[10],int r,int a)
    {
        n[10]=name[10];
        r=rollno;
        a=age;
    }
    void getdetails()
    {
        cout<<"enter the name of the student:";
        cin>>name;
        cout<<"enter the roll no of the student:";
        cin>>rollno;
        cout<<"enter the age of the student:";
        cin>>age;
    }
    void display()
    {
        cout<<"name of the student:"<<name<<endl;
        cout<<"roll no of the student:"<<rollno<<endl;
        cout<<"age of the student:"<<age<<endl;
    }
};
int main()
{
    student s[10];
    for(int i=0;i<10;i++)
    {
        s[i].getdetails();
        s[i].display();
    }
    return 0;
}