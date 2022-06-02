#include<iostream>
#include<cstring>
using namespace std;
class student
{
    protected:
    string name;
    int roll_no;
    public:
    void get_data(string s,int rn)
    {
        name=s;
        roll_no=rn;
    }
    void printdata()
    {
        cout<<"name of the student :"<<name<<endl;
        cout<<"roll number of the student :"<<roll_no<<endl;
    }
};
class test:public student
{
    protected:
    string subject1;
    string subject2;
    int mark1;
    int mark2;
    public:
    void get_details(string sub1,string sub2,int m1,int m2)
    {
        subject1 = sub1;
        subject2 = sub2;
        mark1 = m1;
        mark2=m2;
    }
    void print_details()
    {
        cout<<"name of the subject 1st :"<<subject1<<endl;
        cout<<"marks scored in subject 1 :"<<mark1<<endl;
        cout<<"name of the subject 2nd :"<<subject2<<endl;
        cout<<"marks scored in subject2 :"<<mark2<<endl;
    }
};
class result:public test
{
    protected:
    int total;
    public:
    void display()
    {
        printdata();
        print_details();
        total = mark1 + mark2;
        cout<<"total in both the subjects are :"<<total<<endl;
    }

};
int main()
{
    string s;
    int r;
    string sub1,sub2;
    int m1,m2;
    cout<<"enter the name of the student :";
    cin>>s;
    cout<<"enter the roll no of the student:";
    cin>>r;
    cout<<"enter the subject 1 :";
    cin>>sub1;
    cout<<"enter marks obtained in it :";
    cin>>m1;
     cout<<"enter the subject 2:";
    cin>>sub2;
    cout<<"enter marks obtained in it :";
    cin>>m2;
    result ptr;
    ptr.get_data(s,r);
    ptr.get_details(sub1,sub2,m1,m2);
    ptr.display();
    return 0;
}